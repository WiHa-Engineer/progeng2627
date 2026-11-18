#include <iostream>
#include <vector>

// maybe not the most efficient way:
//sum vector is the function
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){

    int a;

    std::cout << "How many numbers/elements do you wish to enter?" << std::endl;
    std::cin >> a;

    std::vector<double> v;

    std::cout << "Enter the elements. Integers only." << std::endl;

    for (int p = 0; p < a; p++){

        int r;
        std::cin >> r;
        v.push_back(r);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}