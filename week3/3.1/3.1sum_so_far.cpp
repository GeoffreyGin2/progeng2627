#include <iostream>

int main(){
    int sum=0;
    int n = -1;
    while(n!=0){
        std::cin >> n;
        sum += n;
        std::cout << "Sum: " << sum <<std::endl;
    }
}