#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

    if( (n % cf) == 0){ // n can be divided by cf...
            return cf;
        }
    
    }
    return 0;
}

int main(){
    int n;

    n = 99; 
    std::cout << smallest_factor(n) << std::endl;
}