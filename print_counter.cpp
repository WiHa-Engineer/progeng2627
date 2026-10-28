#include <iostream>

int main(){
    int n = 4, counter = 0;

    while (counter < n){
        std::cout << counter << std::endl;
        counter = counter + 1;
    }
}

//I expect
//0
//1
//2
//3
//This is correct as counter starts at 0
//When it reaches 4, it escapes the loop