#include <iostream>

double mypow(double base, int exp){
    double result = 1;

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
}

int main(){
    double x;
    double sum = 0;
    int n;

    std::cout << "Enter base" << std::endl;
    std::cin >> x;

    std::cout << "Enter the maximum power you'd like to sum the powers to" << std::endl;
    std::cin >> n;

    for (int p = 1; p <= n; p++ ){
        sum = sum + mypow(x,p);
    }

    std::cout << "Total sum of powers: " << sum << std::endl;
}