#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == s){
            return 1;
        }
    }
    return 0;
}
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        if(!search_vector(vin2[i],vout)){
            vout.push_back(vin2[i]);
        }
    }
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i],vin2)){
            vout.push_back(vin1[i]);
        }
    }

}
int main(){
    std::ifstream infile; 
    infile.open("warehouse1.txt");

    std::vector<std::string> v1;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v1.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 


    infile.open("warehouse2.txt");

    std::vector<std::string>v2;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }



    while(infile >> tmp){
        v2.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 


    std::ofstream outfile;
    outfile.open("union.txt");
    std::vector<std::string> u = {};
    union_vector(v1,v2,u);
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    for(int i = 0; i < u.size(); i++){
        outfile << u[i] << std::endl;
    }
    // prints on the output file

    outfile.close();

    outfile.open("intersection.txt");
    std::vector<std::string> intersection = {};
    intersection_vector(v1,v2,intersection);
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    for(int i = 0; i < intersection.size(); i++){
        outfile << intersection[i] << std::endl;
    }
    // prints on the output file

    outfile.close();


}

