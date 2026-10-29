//Write a function that takes in input three numbers (using three separate parameters) and returns the largest of the three (this doesn't use loops).
//Write a main to test the function.
//As above, the function doesn't read from the user and doesn't print.

#include <iostream>

double maxofthree(double m, double n, double q){
    double maximum;
    if (n > m){
        maximum = n;
    }
    else{
        maximum = m;
    }
    if (q > maximum){
        maximum = q;
    }

    return maximum;
}

int main(){
    std::cout << "The maximum of 1, 2 and 3 is: " << maxofthree(1, 2, 3) << std::endl;
    std::cout << "The maximum of -1, 6 and 2: " << maxofthree(-1, 6, 2 ) << std::endl;
    std::cout << "The maximum of 10, 5 and 0: " << maxofthree(10, 5, 0) << std::endl;
}