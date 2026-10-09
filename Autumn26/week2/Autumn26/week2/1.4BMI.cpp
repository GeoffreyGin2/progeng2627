#include<iostream>

int main(){
    double weight, height, bmi;
    std::cout << "Please enter weight in kilos" << std::endl;
    std::cin >> weight;
    std::cout <<"Please enter height in m" << std::endl;
    std::cin >> height;
    bmi = (weight)/(height*height);
    std::cout << "bmi equals " << bmi << std::endl;
}