#include <iostream>

int main(){
    int n, c, c2;
    c = 0;
    c2 = 0;
    std::cin >> n;

   
    while(c2 < n){

        
        while(c < n){
            std::cout << "*"; 
        
            c = c + 1;
            
        }

        c = 0;

        std::cout << std::endl;
        
        c2 = c2 + 1;

    }

}