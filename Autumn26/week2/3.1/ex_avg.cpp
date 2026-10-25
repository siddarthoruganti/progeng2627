#include <iostream>

int main(){
    double avg = 0.0;
    int n;
    int i = 0;

    std::cout << "enter a number to add to the avg: " << std::endl;
    std::cin >> n;

    while(n != 0){ 
        i = i + 1;
        avg = (avg * (i-1) + n) / i;
        std::cout << "average so far: " << avg << std::endl;
        std::cout << "enter a number to add to the avg: " << std::endl;
        std::cin >> n;
    }
}