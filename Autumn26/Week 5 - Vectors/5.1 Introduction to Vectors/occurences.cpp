// task is to read a number n from user, then reads n integers from user
// and stores them in vector
//then reads a number s from the user and prints how much s occurs

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

    int s;
    std::cin >> s;
    int counter = 0;

    for (int i = 0; i < n; i++){
        if(v[i] == s){
            counter++;
        }
    }

    std::cout << s << " occurs " << counter << " times in your input " << std::endl;
    
}