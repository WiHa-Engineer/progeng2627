//just to note, to append means to add onto a sequence

#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for(int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }

}

int main(){
    std::vector<int>v1;
    std::vector<int>v2;
    std::vector<int>v_res;

    v1 = {1, 2, 3, 4};
    v2 = {5, 6, 7, 8};
    append_vectors (v1, v2, v_res);

    for (int i = 0; i < v_res.size(); i++){
        std::cout << v_res[i] << " ";
    }

}