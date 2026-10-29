

#include <iostream>
#include <vector>
#include <cmath>

int search_vector(int n, const std::vector<int>& vin){

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
          return i;
        }
    }

    return -1;
}

int main(){
    std::vector<int> v{3, 2, -1};
    

    double expected_index = 1;


    std::cout << search_vector(2,  v) << std::endl;
   

    v = {2, 5, 7, 4};
  

    expected_index = 2;

    std::cout <<search_vector(7,v)<< std::endl;

}