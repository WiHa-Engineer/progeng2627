#include <iostream>

int main(){
    double n, absv;

    std::cout << "Please enter any number, negative or positive" << std::endl;
    std::cin >> n;

    if (n<0){
        absv = -n;
    }
    else{
        absv = n;
    }

    std::cout << " | " << n << " | = " << absv << std::endl;
}