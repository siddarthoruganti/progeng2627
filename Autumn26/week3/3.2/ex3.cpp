#include <iostream>

int main(){

    int n;
    int answer = 1;

    std::cin >> n;

    int x = n;

    for(int i = 0; i < x; i++){
        answer = answer * n;
        n = n - 1;
        
    }

    std::cout << x << "! = " << answer << std::endl;
}