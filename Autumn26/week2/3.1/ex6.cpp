#include <iostream>

int main(){
    std::string x;

    std::cin >> x;

    while(x != "STOP"){ 
        std::cout << x << std::endl;
        std::cin >> x;
    }
}

