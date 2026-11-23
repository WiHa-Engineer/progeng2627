/* Two warehouses have types of fruit, info in text files
create union.txt and intersection.txt 
implement functions for the union txt and intersection txt

the main should read the names and contents of the files
store the info in vectors
computes the union using union_vector and stores result in file
same with intersection
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
       if(vin[i] == s){
        return i;
       }
    }
    return -1;
}

void union_vector(const std::vector<std::string>&vin1, 
    const std::vector<std::string>&vin2, 
    std::vector<std::string>& vout){
        for(int i = 0; i < vin1.size(); i++){
            if(search_vector(vin1[i], vout) == -1){
                vout.push_back(vin1[i]);
            }
        }
        for(int i = 0; i < vin2.size(); i++){
            if(search_vector(vin2[i], vout) == -1){
                vout.push_back(vin2[i]);
            }
        }
}

void intersection_vector(const std::vector<std::string>& vin1,
const std::vector<std::string>& vin2, 
std::vector<std::string>&vout){

    for(int i = 0; i < vin1.size(); i++){
        if((search_vector(vin1[i], vin2) != -1) && (search_vector(vin1[i], vout) == -1)){
            vout.push_back(vin1[i]);
        }
    }
}


int main(){

    std::vector<std::string> w1;
    std::vector<std::string> w2;
    std::vector<std::string> uni;
    std::vector<std::string> inter;

    std::string tmp;

    std::ifstream infile;
    infile.open("warehouse1.txt");
    while(infile >> tmp){
        w1.push_back(tmp);
    }
    infile.close();
    infile.clear();

    infile.open("warehouse2.txt");
    while(infile >> tmp){
        w2.push_back(tmp);
    }
    infile.close();
    infile.clear();


    union_vector(w1, w2, uni);
    std::ofstream outfile;
    outfile.open("union.txt");
    for(int i = 0; i < uni.size(); i++){
        outfile << uni[i] << std::endl;
    }
    outfile.close();
    
    intersection_vector(w1, w2, inter);
    outfile.open("intersection.txt");
    for(int i = 0; i < inter.size(); i++){
        outfile << inter[i] << std::endl;
    }
    outfile.close();
}

