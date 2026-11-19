#include <iostream>

int main() {
    int n, curmax;
    int counter = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    curmax = n;

    // Check for valid positive integer input
    if (n <= 0) {
        std::cout << "Please enter a natural number greater than 0." << std::endl;
    }

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }

        if (n > curmax){
            curmax = n;
        }

        std::cout << n << " ";

        counter = counter + 1;
    }


    std::cout << std::endl;
    std::cout << "Number of Steps: " << counter << std::endl;
    std::cout << "Max number: " << curmax << std::endl;

    return 0;

}

//1 simple collatz conjecture sequence
//2 number of steps counter
//3 print the max number generated in the process