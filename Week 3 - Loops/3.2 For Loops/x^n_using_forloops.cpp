//Exercise: write a program that computes x^n with n>=0 as repeated multiplications

#include <iostream>

int main(){
    double x;
    int n;

    std::cout << "Enter the base" << std::endl;
    std::cin >> x;

    std::cout << "Enter the exponent (must be an integer >= 0)" << std::endl;
    std::cin >> n;

    if (n < 0){
        std::cout << "Exponent must be greater than or equal to 0" << std::endl;
        return 0;
    }

    if(n == 0){
        std::cout << "Anything to the power of zero is equal to 1" << std::endl;
    }

    double intermediate = 1;
    for(int i = 1; i <= n; i++){
        intermediate = intermediate * x;
    }
    
    std::cout << x << "^" << n << " = " << intermediate << std::endl;
}

//remembering for for loops - there are three steps
// initialisation, condition, update