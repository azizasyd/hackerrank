#include <bits/stdc++.h>

std::string timeConversion(const std::string& s) {
    int hour = std::stoi(s.substr(0,2));
    std::string minute_second = s.substr(2,6);
    std::string type = s.substr(8,2);

    if(type == "AM"){
        if(hour == 12){
            return "00" + minute_second;
        } else {
            return s.substr(0,8);
        }
    } else if(type == "PM"){
        if(hour == 12){
            return s.substr(0,8);
        } else {
            return std::to_string(hour + 12) + minute_second;
        }
    }
    return "";
}

int main(){
    std::string s = "07:05:45PM";
    std::string res = timeConversion(s);
    std::cout << res << "\n";
    return 0;
}