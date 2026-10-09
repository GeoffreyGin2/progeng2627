#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;

 
    std::cin >> temp_in >> unit_in;
  

    if(unit_in == "C" || unit_in == "c"){
        unit_out = "F";
         temp_out = (9/5.0) * temp_in+32;
         std::cout << temp_out << " " << unit_out << std::endl;
    }
    else if (unit_in == "F" || unit_in == "f" ){
        unit_out = "C";
        temp_out = (5.0/9) * (temp_in-32);
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, invalid unit" << std::endl;
    }

    
}