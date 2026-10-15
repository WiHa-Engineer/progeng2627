#include <iostream>

int main (){
    double s1, s2, perimeter, area;

    std::cout << "Please enter the length of the rectangle " << std::endl;
    std::cin >> s1;

    std::cout << "Please enter the width of the rectangle" << std::endl;
    std::cin >> s2;

    perimeter = s1 + s2;
    
    area = s1 * s2;

    std::cout << "The perimeter is " << perimeter << std::endl;
    std::cout << "The area is " << area << std::endl;
    
}