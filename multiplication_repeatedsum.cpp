// Exercise: multiplication as repeated sum
// Similar to the example above in which we compute x^n as x * x * x... done n times
// Write a program that computes x * n as x + x + x... done n times.


#include <iostream>

int main(){
    double x, acc = x;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << " * " << n << " = " << acc << std::endl;
}