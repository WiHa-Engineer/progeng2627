#include <iostream>

//function 1
double mypow(double base, int exp){
    double result = 1;

    for(int i = 0; i < exp; i++){
        result = result * base;
    }

    return result;
}

//function 2
double sumofpowers(double x, int n){
    double sum = 0;

    for (int i = 1; i <= n; i++ ){
        sum = sum + mypow(x,i);
    }

    return sum;
}

//testing
int main(){
    std::cout << "The sum of powers of 2 up to 2^3 inclusive = " << sumofpowers(2, 3) << std::endl;
    std::cout << "The sum of powers of 0.5 up to 0.5^3 inclusive = " << sumofpowers(0.5, 3) << std::endl;
    std::cout << "The sum of powers of 10 up to 10^0 inclusive = " << sumofpowers(10,0) << std::endl;
}

//^0 looks wrong, but if you look at the sigma notation, it is correct. i starts at 1, and if n = 0, there are no terms to add so the result is 0