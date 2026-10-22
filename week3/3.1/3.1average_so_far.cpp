#include <iostream>

int main(){
    double sum=0,count = 0;
    int n = -1;
    double average = 0;
    while(n!=0){
        std::cin >> n;
        if(n==0) break;
        count++;
        sum += n;
        average = sum/count;
        std::cout << "Average: " << average <<std::endl;
    }
}
