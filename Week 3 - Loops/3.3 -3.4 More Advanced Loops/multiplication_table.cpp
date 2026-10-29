#include <iostream>

int main(){
    int n;
    std::cout << "Enter the number which you want the multiplication table of" << std::endl;
    std::cin >> n;

    for (int row = 1; row <= n; row++){
        for(int column = 1; column <= n; column++){
            std::cout << row * column << "\t";
        }
        std::cout << std::endl;
    }
}

//note \t gives more seperation when printed instead of " "