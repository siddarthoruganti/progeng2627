#include <iostream>

int main(){
    int n, l, max;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    l = 0;
    max = n;

    while(n > 1){

        if(n % 2 == 0){

            n = n / 2;
        }
        else{
            
            n = 3*n + 1;

        }

        if(n > max){
            max = n;
        }

        std::cout << n << "\t";

        l = l +1;

    }

    std::cout << std::endl;

    std::cout << "Number of steps: " << l << std::endl;

    std::cout << "Max number: " << max << std::endl;

}