#include <iostream>

double mypow(double base, int exp){
    double result = 1;
    // we declare a variable for the result
    // (should it be initialised? to what value?)

    //yes it needs to be initialised to 1 in the case of ^0

    for(int i = 0; i < exp; i++){
        result = result * base;
    }
    if(exp < 0){
        exp = std::abs(exp);
        for(int i = 0; i < exp; i++){
            result = result * base;
        }
        return 1/result;
    }

    return result;
    // at the end we return the value we computed and *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-3: " << mypow(2, -3) << std::endl;
    std::cout << "3^-2: " << mypow(3,-2) << std::endl;
}