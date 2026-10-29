

#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }

    return;

}

int main(){
    std::vector<int> v1, v2, vout;
    

        v1 = {1,2,3,4,5};
        v2 = {5,2,3,21};
        append_vectors(v1, v2, vout);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < vout.size(); i++){
            std::cout << vout[i] << std::endl;
        }
    
}