#include <iostream>

int main(){

    double x;
    int n;
    double total = 1.0;

    std::cin >> x >> n;

    for(int i = 0; i < n; i++){
        total = total * x;
        
    }

    std::cout << total << std::endl;
}