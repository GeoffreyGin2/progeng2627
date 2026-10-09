#include<iostream>

int main(){
    double n1,temp;
    std::cout << "Please enter temperature in celcius" << std::endl;
    std::cin >> n1;
    temp = (9.0/5) * n1+32;
    std::cout << "Temp in Farhenheit equals " << temp << std::endl;
}