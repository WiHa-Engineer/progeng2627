#include <iostream>
#include <string>

void myswap(std::string& word1, std::string& word2){
    std::string temporary;
    temporary = word1;
    word1 = word2;
    word2 = temporary;
}

int main(){
    std::string word1, word2;

    std::cout << "Enter 2 Words: " << std::endl;
    std::cin >> word1 >> word2;

    std::cout << "You" << std::endl;
    std::cout << "Word 1: " << word1 << std::endl;
    std::cout << "Word 2: " << word2 << std::endl;

    myswap(word1, word2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "Word 1: " << word1 << std::endl;
    std::cout << "Word 2: " << word2 << std::endl;
}