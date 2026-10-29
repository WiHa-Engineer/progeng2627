#include <iostream>

//do not alter function myswap
void myswap(double& a, double& b){
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if(s2 < s1){
        myswap(s1, s2);
    }
    if(s3 < s1){
        myswap(s1, s3);
    }
    if(s3 < s2){
        myswap(s2, s3);
    }
}

int main(){
    //6 possible examples
    
    double a, b, c;

    a = 1; b = 2; c = 3;
    sort_three_numbers(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 1; b = 3; c = 2;
    sort_three_numbers(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 3; b = 2; c = 1;
    sort_three_numbers(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 2; b = 3; c = 1;
    sort_three_numbers(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 3; b = 1; c = 2;
    sort_three_numbers(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;

    a = 2; b = 1; c = 3;
    sort_three_numbers(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;
}