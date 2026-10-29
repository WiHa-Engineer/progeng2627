#include <iostream>
#include <cmath>

int main(){
    double x;
    double sum = 0;
    int n;

    std::cout << "Enter base" << std::endl;
    std::cin >> x;

    std::cout << "Enter the maximum power you'd like to sum the powers to" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++ ){
        sum = sum + std::pow(x,i);
    }

    std::cout << "Total sum of powers: " << sum << std::endl;
}