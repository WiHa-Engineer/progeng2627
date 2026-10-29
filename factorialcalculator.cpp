#include <iostream>

int main(){
    int n;

    std::cout << "What positive integer would you like to calculate the factorial of?" << std::endl;
    std::cin >> n;

    if(n < 0){
        std::cout << "Error! Please enter a positive integer" << std::endl;
        return 0;
    }

    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    std::cout << n << "!" << " = " << factorial << std::endl;
}