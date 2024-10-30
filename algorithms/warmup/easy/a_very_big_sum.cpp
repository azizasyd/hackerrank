#include <bits/stdc++.h>

long long aVeryBigSum(const std::vector<long long>& ar) {
    long long res = std::accumulate(ar.begin(), ar.end(), 0LL);
    return res;
}

int main() {
    int n = 5;
    std::vector<long long> a = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    long long res = aVeryBigSum(a);
    std::cout << res << "\n";

    return 0;
}
