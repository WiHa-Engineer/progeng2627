#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp);
        //in this loop we store the values in a vector
        //and then print values
    }

    infile.close();

    //task is to read the contents of a text file with numbers
    //stores it in a vecotr
    //and prints in reverse order

    
    for (int i = (v.size() - 1); i >= 0; i-- ){
        std::cout << v[i] << std::endl;
    }
}

// using std::string now makes it work with letter strings too