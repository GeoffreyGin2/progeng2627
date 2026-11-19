#include <iostream>
#include <fstream>
#include <string>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){

    std::string file = argv[0];
    std::ifstream infile; 
    infile.open(file);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close(); 


}