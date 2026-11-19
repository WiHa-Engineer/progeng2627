#include <iostream>

int main(){
    int n = 5;
    int guess, difference;

    std::cout << "Guess the number. It's between -10 and 10." << std::endl;
    std::cin >> guess;

    while (guess != n){
        difference = n - guess;
        if (difference > 0){
            std::cout << "Your guess is lower than the number" << std::endl;
        }
        else{
            std::cout << "Your guess is higher than the number" << std::endl;
        }
        std::cin >> guess;
    }

    if (guess == n){
        std::cout << "Correct Guess!" << std::endl;
    }
}