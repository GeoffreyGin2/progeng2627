#include <iostream>
#include <cmath>
int main(){
    double a,b,c;
    std:: cout << "Enter your three sides" << std::endl;
    std:: cin >> a >> b >> c;
    double perimeter = a+b+c;
    double semi = perimeter / 2.0;
    if(a+b <= c || a+c <= b || b+c <= a){
        std::cout << "Invalid Triangle" << std::endl;
    }
    else if (a == b && b == c){
        std::cout << "It is a valid equilateral triangle" << std::endl;
        std::cout << "Its perimeter is " << perimeter << std::endl;
        std::cout << "Its area is " << sqrt(semi*(semi-a)*(semi-b)*(semi-c)) << std::endl;
    }
    else if (a==b || b == c || a == c){
        std::cout << "It is a valid iscoceles triangle" << std::endl;
        std::cout << "Its perimeter is " << perimeter << std::endl;
        std::cout << "Its area is " << sqrt(semi*(semi-a)*(semi-b)*(semi-c)) << std::endl;
    }
    else{
        std::cout << "It is a valid scalene triangle" << std::endl;
        std::cout << "Its perimeter is " << perimeter << std::endl;
        std::cout << "Its area is " << sqrt(semi*(semi-a)*(semi-b)*(semi-c)) << std::endl;
    }
}