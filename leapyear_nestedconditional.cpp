#include <iostream>

int main(){
    int year;

    std::cout <<"Please enter a year to check if it's a leap year or not" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){
        
        if( (year % 100) == 0) {

            if( (year % 400) == 0){
                 std::cout << "This is a leap year" << std::endl;
            }
            else{
                std::cout << "This is not a leap year" << std::endl;
            }
        }
        else{
            std::cout << "This is a leap year" << std::endl;
        }  
    }

    else{
        std::cout << "This is not a leap year" << std::endl;
    }

}

//multiple of 4 is generally a leap year
//multiples of 100 aren't
//multiples of 400 are