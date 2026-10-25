#include <iostream>

int main(){
    int total = 0;
    int n;

    std::cout << "enter a number to sum to the total: " << std::endl;
    std::cin >> n;

    while(n != 0){ 
        total = total + n;
        std::cout << "total so far: " << total << std::endl;
        std::cout << "enter a number to sum to the total: " << std::endl;
        std::cin >> n;
    }
}