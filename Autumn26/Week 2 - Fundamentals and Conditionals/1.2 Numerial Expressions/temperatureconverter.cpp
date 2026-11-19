#include <iostream>

int main (){
    double celcius, fahrenheit;

    std::cout << "Temperature in Celsius" << std::endl;
    std::cin >> celcius;

    fahrenheit = (celcius * 9/5.0) + 32;


    std::cout << "This is equal to " << fahrenheit << " degrees fahrenheit" << std::endl;
}