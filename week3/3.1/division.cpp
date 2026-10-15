#include <iostream>

int main(){

    int a, b = 0;


    std::cin >> a >> b;
    int curr = a;
    int count = 0;


    while(curr > b){
        curr -= b;
        count++;
    }

    std::cout << a << "/" << b <<  " = " << count << " Remainder: " << curr << std::endl;

}