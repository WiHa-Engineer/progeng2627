// the task:
//user enters number
//user enters the number of numbers they entered
//program reads number t from user and prints elements from the vector less than t

#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    int t;
    std::cin >> t;
    for(int i = 0; i < n; i++){
        if(v[i] < t){
            std::cout << v[i] << " ";
        }
    }
}