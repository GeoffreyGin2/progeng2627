#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>& vin){
    if(vin.size() == 0) return -1;

    int curmin = vin[0];
    int index = 0;
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] <= curmin){
            index = i;
            curmin = vin[i];
        }
    }

    return index;
}

int main(){
    std::vector<double> v{3, 0.5, -1};
    

    double expected_index = 1;


    std::cout << min_vector_element(v)<< std::endl;
   

    v = {2, -1.1, 7, -1.5};
  

    expected_index = 3;

    std::cout <<min_vector_element(v)<< std::endl;

}