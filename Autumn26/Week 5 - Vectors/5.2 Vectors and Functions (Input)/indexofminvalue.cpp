//This function should return the index of the smallest element in the vector and -1 if the vector is empty.
//Before you even start implementing the function, write the test cases in the main.

#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){

    if(vin.size() == 0){
        return -1;
    } 


    int mindex = 0;

    for(int i = 1; i < vin.size(); i++){
        if(vin[i] < vin[mindex]){
            mindex = i;
        }
    }
    return mindex;
}


int main(){
    std::vector<double> v;

    std::cout << min_vector_element(v) << std::endl;

    v = {8};
    std::cout << min_vector_element(v) << std::endl;
    
    v = {1, 3, 5};
    std::cout << min_vector_element(v) << std::endl;

    v = {5, 3, 1};
    std::cout << min_vector_element(v) << std::endl;

    v = {0, -1, 2};
    std::cout << min_vector_element(v) << std::endl;

}