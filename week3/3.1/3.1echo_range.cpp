#include <iostream>

int main(){
    int n = 1;

    while((n < 11) && (n>-11)){ // != means different or not equal
        std::cin >> n;
        std::cout << n << std::endl;
    }
}