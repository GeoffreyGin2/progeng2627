#include <iostream>

double mypow(double base, int exp){
    double result; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent
    //Exercise: sum of powers with mypow¶
    //Write a version of the sum of powers program that uses the function mypow you have implemented instead of std::pow.
     int x,n;
    std::cin>>x>>n;
    for(int i = 1;i <= n; i++){
        std::cout << mypow(x, i) << std::endl;
    }
}