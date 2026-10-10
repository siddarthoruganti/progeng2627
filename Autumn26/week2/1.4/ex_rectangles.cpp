#include <iostream>

int main(){
    double l, w, a, p;

    std::cout << "What is the length?" << std::endl;
    std::cin >> l;

    std::cout << "What is the width?" << std::endl;
    std::cin >> w;

    a = l * w;
    p = 2 * (l + w);

    std::cout << "Perimeter: " << p << std::endl;
    std::cout << "Area: " << a << std::endl;

}