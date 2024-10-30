#include <bits/stdc++.h>

void staircase(int n) {
    for (int i = 1; i <= n; ++i) {
        std::cout << std::string(n - i, ' ') << std::string(i, '#') << "\n";
    }
}

int main(){
    int n = 6;
    staircase(n);
    return 0;
}