#include <iostream>
#include <cmath>

int main(){
    int x,n;
    std::cin>>x>>n;
    for(int i = 1;i <= n; i++){
        std::cout << std::pow(x, i) << std::endl;
    }
}