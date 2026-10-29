
#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 
    int n;
    std::cout << "enter number n" << std::endl;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        std::cout << "enter a number" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }

    int s;
    std::cout << "enter number s" << std::endl;
    std::cin >> s;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == s){
            count ++;
        }
    }

    if (count > 0){
        std::cout << "s appears " << count << " times" << std::endl;
    }
    else{
        std::cout << "No occurence found" << std::endl;
    }

}