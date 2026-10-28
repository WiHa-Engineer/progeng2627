//Same as above but the program stops also if the user enters "Stop" or "stop" (or "STOP" as above). 
//You will need to use boolean operators to implement this condition.

#include <iostream>
#include <string>

int main(){
    std::string word;

    std::cin >> word;

    while ((word != "STOP") && (word != "Stop") && (word != "stop") ){
        std::cout << word << std::endl;
        std::cin >> word;
    }

}
