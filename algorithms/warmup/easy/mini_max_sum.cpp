#include <bits/stdc++.h>

void miniMaxSum(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    long long min_sum = 0, max_sum = 0;
    for(int i = 0; i < 4; ++i){
        min_sum += arr[i];
    }
    for(int i = 1; i <= 4; ++i){
        max_sum += arr[i];
    }

    std::cout << min_sum << " " << max_sum << "\n";
}

int main(){
    std::vector<int> arr = {1,3,5,7,9};
    miniMaxSum(arr);
    return 0;
}