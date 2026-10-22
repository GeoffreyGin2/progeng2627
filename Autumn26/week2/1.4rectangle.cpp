#include<iostream>

int main(){
    double n1, n2, area;
    std::cout << "Please enter 1st length" << std::endl;
    std::cin >> n1;
    std::cout <<"Please enter 2nd length" << std::endl;
    std::cin >> n2;
    area = n1 * n2;
    std::cout << "Area equals " << area << std::endl;
}