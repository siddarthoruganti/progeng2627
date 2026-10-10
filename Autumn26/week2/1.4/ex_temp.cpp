#include <iostream>

int main(){
    double c, f;

    std::cout << "Celcius: " << std::endl;
    std::cin >> c;

    f = 9/5 * c + 32;

    std::cout << "Fahrenheit: " << f << std::endl;
}