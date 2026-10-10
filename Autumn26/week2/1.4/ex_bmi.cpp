#include <iostream>

int main(){
    double h, w, bmi;

    std::cout << "What's your weight? " << std::endl;
    std::cin >> w;

    std::cout << "What's your height? " << std::endl;
    std::cin >> h;

    bmi = w / (h*h);

    std::cout << "BMI: " << bmi << std::endl;
}