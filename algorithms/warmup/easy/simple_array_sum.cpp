#include <bits/stdc++.h>

int simpleArraySum(std::vector<int> ar) {
    int res = std::accumulate(ar.begin(), ar.end(), 0);
    return res;
}

int main(){
    int n = 6;
    std::vector<int> a = {1,2,3,4,10,11};
    int res = simpleArraySum(a);
    std::cout << res << "\n";
}