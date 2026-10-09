#include<iostream>

int main(){
    double n1, n2, product;
    std::cout << "Please enter British Pounds" << std::endl;
    std::cin >> n1;
    std::cout <<"Please enter exchange rate to Euros" << std::endl;
    std::cin >> n2;
    product = n1 + n2;
    std::cout << "Amount of Euros equals " << product << std::endl;
}