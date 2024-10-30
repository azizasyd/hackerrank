#include <bits/stdc++.h>

int birthdayCakeCandles(std::vector<int> candles) {
    int max_height = 0;
    int max_count = 0;
    for(int i = 0; i < candles.size(); ++i){
        if(candles[i] > max_height){
            max_height = candles[i];
            max_count = 1;
        } else if(candles[i] == max_height){
            max_count++;
        }
    }
    return max_count;
}

int main(){
    int n = 4;
    std::vector<int> a = {3,2,1,3};
    int res = birthdayCakeCandles(a);
    std::cout << res << "\n";
}