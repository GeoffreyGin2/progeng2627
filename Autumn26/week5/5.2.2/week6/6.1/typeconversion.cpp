#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

int main(){
    std::cout << std::atoi("11") + std::atoi("2") << std::endl; 
    std::cout << '1' + '3' << std::endl;
    std::string n1 = "1";
    std::string n2 = "3";
    std::cout << n1 + n2 << std::endl;
    std::cout << std::to_string(1) + std::to_string(4) << std::endl;

    std::stringstream s1;
    s1 << 1;
    std::cout << s1.str()  + std::to_string(4) << std::endl;
}