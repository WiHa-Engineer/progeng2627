#include <iostream>

bool leap_year(int year){
    bool ly;

    if( (year % 4) == 0){
        if( (year % 100) == 0) {
            if( (year % 400) == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }  
    }
    else{
        ly = false;
    }

    return ly;
}

int main(){
    std::cout << "Note: 1 will be printed if it is a leap year, and 0 if it isn't" << std::endl;
    std::cout << "1600: " << leap_year(1600) << std::endl;
    std::cout << "1700: " << leap_year(1700) << std::endl;
    std::cout << "1800: " << leap_year(1800) << std::endl;
    std::cout << "1900: " << leap_year(1900) << std::endl;
    std::cout << "2000: " << leap_year(2000) << std::endl;
    std::cout << "2026: " << leap_year(2026) << std::endl;
}