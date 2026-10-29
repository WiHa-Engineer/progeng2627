#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int a = 0;
    while (a < n){
    
        int b = 0;
        while (b < n){
            std::cout << "*";
            b = b + 1;
        }  

    std::cout << std::endl;
    a = a + 1;
    }
}