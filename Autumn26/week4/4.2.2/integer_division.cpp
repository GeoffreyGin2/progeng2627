#include <iostream>


void divide(double x, double y, double& a1, double& a2){
    a1 = x/y;
    a2 = y/x;
    return;
   
}

int main(){

    double x,y;


    std::cout << "this program finds the quotient of two numbers in either order" << std::endl;

    std::cout << "please enter the numbers:" << std::endl;

    std::cin >> x >> y;

    double a1, a2;
    
   
    std::cout << "the quotients are::" << std::endl;
    std::cout << "x/y " << a1 << std::endl;
    std::cout << "y/x" << a2 << std::endl;
   
       
   

}