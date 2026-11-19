//Write a program that keeps reading integers from the users (stopping when the user enters 0) 
//after each number read prints what's the average of the numbers at that point. 
//Note that the numbers in input are integers but the average will not always be an integer.

#include <iostream>
int main(){
    int n = 1;
    int inputnumber = 1;
    double sum = 0;
    double avg;


    while ((n != 0)){

        std::cout << "Enter a number" << std::endl;
        std::cin >> n;
        if(n == 0){
            break;
        }

        sum = sum + n;
        avg = sum / inputnumber;
        std::cout << "The average so far is: " << avg << std::endl;
        inputnumber = inputnumber + 1;

    }
}