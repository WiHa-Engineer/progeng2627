#include <iostream>

int main (){
    int n;

    std::cin >> n;

    while((-11 < n) && (n < 11)){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}

//Additional notes:
//std::cin >> n; is inside the loop because this line requires the user to input another number
//this stops the loop from repeating forever
//however, once a number outside the range is inputted, the loop terminates and no more inputs are requested