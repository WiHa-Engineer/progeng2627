//Consider the case in which we have integers a and b 
//we want to compute the integer division a / b which includes a quotient q and a remainder r such that q * b + r = a.
//We know that in C++ we can already compute this by using q = a / b and r = a % b.
//However for the sake of the exercise we want to try and do this manually as repeated subtraction. Consider the following example:

#include <iostream>

int main(){
    int a;
    int divisor;

    std::cout << "Programme to divide two numbers (A by B) and find the quotient and remainder" << std::endl;

    std::cout << "Enter A" << std::endl;
    std::cin >> a;

    std::cout << "Enter B" << std::endl;
    std::cin >> divisor;

    int p = 0;
    int r = a;

    if (r >= divisor){
        std::cout << r << " is greater than " << divisor << " so we subtract " << divisor << " from " << r << std::endl;
    }


    while (r >= divisor){
        r = r - divisor;
        p = p + 1;

        if (r >= divisor){
             std::cout << r << " is greater than " << divisor << " so we subtract " << divisor << " from " << r << std::endl;
        }
    }

    std::cout << r << " is not greater than " << divisor << " so we terminate the loop " << std::endl;

    std::cout << "The quotient is the number of subtractions: " << p << std::endl;
    std::cout << "The remainder is the number we have left at the end: " << r << std::endl;
}