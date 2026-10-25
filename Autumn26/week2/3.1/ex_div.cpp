#include <iostream>

int main(){
    double q, r, dsor;
    q = 0;

    std::cout << "enter the dividend and divisor " << std::endl;
    std::cin >> r >> dsor;


    while(r >= dsor){ 
        q = q + 1;
        r = r - dsor;

        std::cout << r + dsor << "-" << dsor << "=" << r << std::endl;
    }

    std::cout << "quotient: " << q << std::endl;
    std::cout << "remainder: " << r << std::endl;


}