//Write a function that takes the length of the sides of a rectangle 
//Computes and provides in output using output parameters both its perimeter and area.
//As usual the function itself doesn't read from the user and doesn't print.
//Write a main to test the function.

#include <iostream>

void calculation(double a, double b, double &perimeter, double &area){
    perimeter = 2*a + 2*b;
    area = a*b;
}

int main(){
    double P, A;
    calculation(3,5,P,A);

    std::cout << "Rectangle with side lengths 3 and 5: " << std::endl;
    std::cout << "Perimeter: " << P << std::endl;
    std::cout << "Area: " << A << std::endl;
}