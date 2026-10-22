#include <iostream>
// I predict that this would  print this is function f and n is: 1
int f(){
    std::cout << "this is function f" << std::endl;
    return 1;
    std::cout << "printing after the first return statement" << std::endl;
    return 2;
    std::cout << "printing after the second return statement" << std::endl;
}

int main(){
    int n = 0;
    n = f();
    std::cout << "n is: " << n << std::endl; 
}