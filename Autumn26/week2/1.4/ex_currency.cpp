#include <iostream>

int main(){
    double exchange_rate, pounds, euros;

    exchange_rate = 1.18;

    std::cout << "How many pounds do you have?" << std::endl;
    std::cin >> pounds;

    euros = exchange_rate * pounds;

    std::cout << "You can withdraw " << euros << " euros" << std::endl;
}