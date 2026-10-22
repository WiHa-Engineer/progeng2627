#include <iostream>
#include <string>
//includes header for text variables

int main (){
    std::string user_name;
    //declaration of a variable
    //"user_name" is the name of this variable
    //std::string is the type of the variable

    std::cout << "What is your name?" << std::endl;
    //normal print instruction

    std::cin >> user_name;
    //instruction reads information from the keyboard
    //std::cin means console input
    //stores it in the variable "user_name"

    std::cout << "Hello, " << user_name << std::endl;
    //prints the hello, and the content of the variable "user_name"
    //prints a new line
}