#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int n;
    std::cout<<"how many nums do you want in your vector" <<std::endl;
    std::vector<double> v;
      for(int i = 0; i < n; i++){
        int x;
        std::cout << "enter a number" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }



    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}