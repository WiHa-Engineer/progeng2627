#include <iostream>

int main(){
    int n, i = 0;
    // we have a variable i
    // counting how many times we print

    std::cin >> n;

    // the while loop has a condition in parentheses,
    // if the condition is true, then we enter the loop 
    // and execute the instructions inside
    // otherwise the execution goes past the loop

    while(i < n){

        std::cout << "hello" << std::endl;

        i = i + 1;
        // after each print, i increases by 1
    }
}

//counter is just the name of a variable , i is commonly used too