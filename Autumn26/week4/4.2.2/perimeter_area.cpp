#include <iostream>


bool rectangle(double len, double wid, double& area, double& perimeter){

    bool possible = true;

    if(len <= 0 || wid <=0){
        possible = false;
    }
    
    area = len*wid;
    perimeter = 2*(len+wid);

    return possible;
}

int main(){

    double length, width;


    std::cout << "this program finds the Perimeter and Area of a rectangle" << std::endl;

    std::cout << "please enter the length and width:" << std::endl;

    std::cin >> length >> width;

    double area, perimeter;
    
    if(rectangle(length,width,area,perimeter)){
        std::cout << "the Area and Perimeter are::" << std::endl;
        std::cout << "Area: " << area << std::endl;
        std::cout << "perimeter" << perimeter << std::endl;
    }
    else{
        std::cout << "Invalid dimensions" <<std::endl;
    }
       
   

}