// Exercise: filtering values¶
// Write a program that reads from the user a number n, then reads n numbers from the user and stores them in a vector. 
// The program then reads a number t from the user and prints all the numbers in the vector that are less than t.
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

    int t;
    std::cout << "enter t" << std::endl;
    std::cin >> t;

    for(int i = 0; i < n; i++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }

}