#include <bits/stdc++.h>

int diagonalDifference(std::vector<std::vector<int>> arr) {
    int first_diagonal = 0, second_diagonal = 0;

    for (int i = 0; i < arr.size(); ++i) {
        first_diagonal += arr[i][i];
        second_diagonal += arr[i][arr.size() - i - 1];
    }
    return abs(first_diagonal - second_diagonal);
}

int main(){
    int n = 3;
    std::vector<std::vector<int>> arr = {{11,2,4}, {4,5,6}, {10,8,-12}};
    int res = diagonalDifference(arr);
    std::cout << res << "\n";
    return 0;
}