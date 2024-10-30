#include <bits/stdc++.h>

std::vector<int> parseInts(std::string& str) {
    std::vector<int> result;

    std::stringstream ss(str);
    int number;
    char comma;

    // read int from stream
    while (ss >> number) {
        result.push_back(number);
        ss >> comma;  // read and discard comma
    }
    return result;
}

int main() {
    std::string str = "23,4,56";

    std::vector<int> res = parseInts(str);
    for (int r : res) {
        std::cout << r << "\n";
    }
    return 0;
}
