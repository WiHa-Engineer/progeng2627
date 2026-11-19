//The sum so far
//Write a program that keeps reading integers from the users (stopping when the user enters 0) 
//after each number read prints what's the sum of the numbers at that point. For example:
//enter a number:
//3
//the sum so far is:
//3
//enter a number:
//5
//the sum so far is:
//8


#include <iostream>
int main(){
    int n = 1;
    int sum = 0;

    while (n != 0){
        std::cout << "Please enter a number" << std::endl;
        std::cin >> n;
        if (n == 0){
            break;
        }
        sum = sum + n;
        std::cout << "The sum so far is: " << sum << std::endl;
    }
}

//you can place the input command inside the while loop and not intiate the while loop
//because the compiler reads the input, if it is 0 then it stops, if not then it enters the while loop 