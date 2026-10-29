

#include <iostream>
#include <vector>


void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t)
            vout.push_back(vin[i]);
    }
   

    return;

}

int main(){
    std::vector<double> v1, vout;
    

        v1 = {1,2,3,4,5};

        filter_v(v1, 3.0, vout);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < vout.size(); i++){
            std::cout << vout[i] << std::endl;
        }
    
}