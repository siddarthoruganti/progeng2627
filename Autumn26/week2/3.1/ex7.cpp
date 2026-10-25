#include <iostream>

int main(){
    std::string x;

    std::cin >> x;

    while((x != "STOP") && (x != "Stop") && (x != "stop")){ 
        std::cout << x << std::endl;
        std::cin >> x;
    }
}

