#include <bits/stdc++.h>

void plusMinus(std::vector<int> arr){
    double count_zero = 0, count_pos = 0, count_neg = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] == 0){
            count_zero++;
        } else if(arr[i] > 0){
            count_pos++;
        } else if(arr[i] < 0){
            count_neg++;
        }
    }
    double pos_ratio = (count_pos) / arr.size();
    double neg_ratio = (count_neg) / arr.size();
    double zero_ratio = (count_zero) / arr.size();

    std::cout << std::fixed << std::setprecision(6);
    std::cout << pos_ratio << "\n";
    std::cout << neg_ratio << "\n";
    std::cout << zero_ratio << "\n";
}

int main(){
    std::vector<int> arr = {-4,3,-9,0,4,1};
    plusMinus(arr);
    return 0;
}
