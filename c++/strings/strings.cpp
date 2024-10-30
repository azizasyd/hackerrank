#include <bits/stdc++.h>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;

    std::cout << str1.length() << " " << str2.length() << "\n";
    std::cout << str1 + str2 << "\n";

    std::swap(str1[0],str2[0]);
    std::cout << str1 << " " << str2 << "\n";
    return 0;
}