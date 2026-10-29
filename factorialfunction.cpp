#include <iostream>

int myfactorial(int in){
// in is just a name

    int fact = 1;

    for (int i = 1; i <= in; i++){
        fact = fact * i;
    }

    // TODO: compute the factorial of in
    // so that the result is stored in variable fact

    return fact;
}

int main(){
    int n; 
    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "Factorial of " << n << ": " << myfactorial(n) << std::endl;
}