//This function should check if the vector contains an element with value n
//and return the index of (the first occurrence of) the element if found
//remember that you can use an early return in this case and -1 if not.


#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){

    std::vector<int> v;

    v = {1};
    std::cout << search_vector(2, v) << std::endl;

    v = {1, 2};
    std::cout << search_vector(2, v) << std::endl;

    v = {1, 1, 2, 2};
    std::cout << search_vector (2, v) << std::endl;
}