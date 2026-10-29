#include <iostream>

int main (){
    double pounds, multiplier, euros;

    std::cout << "How many pounds would you like to convert to euros" << std::endl;
    std::cin >> pounds;

    std::cout << "What is the curent exchange rate from pounds to euros" << std::endl;
    std::cin >> multiplier;

    euros = pounds * multiplier;

    std::cout << "This is equal to " << euros << " euros" << std::endl;
}