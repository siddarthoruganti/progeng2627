#include <iostream>
#include <string>

int main(){
    int upper, lower, current;
    std::string feedback;
    upper = 0;
    lower = 1;
    feedback = ' ';

    while(lower > upper){
        std::cout << "please enter upper bound:" << std::endl;
        std::cin >> upper;

        std::cout << "please enter lower bound:" << std::endl;
        std::cin >> lower;
    }



    while(feedback != "correct"){

        current = lower + ((upper - lower) / 2);
        std::cout << "Guess is: " << current << std::endl;

        std::cout << "higher or lower or correct: " << std::endl;
        std::cin >> feedback;


        if(feedback == "correct"){
            
        }
        else if(feedback == "higher"){
            lower = current;
        }
        else if(feedback == "lower"){
            upper = current;
        }
        else{
            std::cout << "give valid feedback: " << std::endl;
            std::cin >> feedback;
        }
        
    }

}