// first version, not the most efficient one
#include <iostream>

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf <= n/2 && !found_factor; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        }
    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}

//Do we need to stay in the loop if we have already found a factor for the number? 
//If we keep testing candidate factors and we do not find a factor, do we need to go all the way to n-1 in our search? 
//Or can we stop earlier than that? How much earlier? 
//On the basis of your reflection, implement the improvements in the program (without using the break statement).

//Q2 - no, since it is not prime if 1 factor apart from 1 and itself is found, so the loop can be exited earlier
//Q3 - no you just need to test up to n/2
//Initially I had cf < n/2. But this is WRONG, because testing for 4, 2 isn't less than 2, so it won't enter the loop
//which is not what I intended

//! is the logical NOT operator