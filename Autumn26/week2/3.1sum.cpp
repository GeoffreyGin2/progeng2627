#include <iostream>

int main(){
    double sum = 0;
    double n = -1;
    int count = 0;
    while(n != 0){ // != means different or not equal
         std::cout << "enter a number" << std::endl;
        std::cin >> n;
        count++;
        sum += n;
        std::cout << "Total" << sum << std::endl;
        std::cout << "Average" << sum/count << std::endl;

        
    }
}