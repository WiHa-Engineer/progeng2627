#include <iostream>

void division(int a, int b, int &x , int &r){
    x = a / b;
    r = a % b;
}

int main(){
    int x, r;

    division(100,5,x,r);
    std::cout << "Quotient: " << x << std::endl;
    std::cout << "Remainder: " << r << std::endl;

    division(100,3,x,r);
    std::cout << "Quotient: " << x << std::endl;
    std::cout << "Remainder: " << r << std::endl;
}