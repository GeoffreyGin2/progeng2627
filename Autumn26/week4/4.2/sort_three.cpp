#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)
void myswap(double& n1, double& n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}
void sort_two_numbers(double& s1, double& s2, double& s3){
    // complete this function
    // so that the output is as in the examples below
    if (s1>=s2 && s1>=s3){
        if(s2 > s3){
            double temp = s1;
            s1 = s3;
            s3 = temp;
        }
        else{
            double temp = s1;
            s1 = s2;
            s2 = s3;
            s3 = temp;
        }
        
    }
    else if (s2>=s1 && s2>=s3){
        if(s2 > s3){
            double temp = s1;
            s1 = s3;
            s3 = temp;
        }
        else{
            double temp = s1;
            s1 = s2;
            s2 = s3;
            s3 = temp
        }
        
    }
    // use function myswap within this function
    // (remember to change the type of the parameters to double)
}

int main(){
    double n1, n2,n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_two_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 <<  " " << n3 <<  std::endl;
}