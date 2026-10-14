#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed

    c = a + b;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed


    // my prediction for the output would be as follows:
    //3
    //3
    //4
    //which is correct

}