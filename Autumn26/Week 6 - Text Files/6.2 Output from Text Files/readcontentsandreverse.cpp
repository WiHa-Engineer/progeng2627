#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(){
    std::ifstream infile;

    infile.open("input.txt");

    std::vector<std::string> v;

    if(infile.is_open()){
        std::string tmp;
        while(infile >> tmp){
            v.push_back(tmp);
        }
    }
    
    infile.close();

    std::ofstream outfile;
    outfile.open("newfile.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = (v.size() - 1); i >= 0; i--){
        outfile << v[i] << " ";
    }
}