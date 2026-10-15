#include <iostream>
#include <string>
int main(){
    std::string n = "";

    while(n != "STOP" || "n!=stop"){ // != means different or not equal
        if(n!="STOP" || n!="stop"){
            std::cin >> n;
            std::cout << n << std::endl;
        }
      
    }
}