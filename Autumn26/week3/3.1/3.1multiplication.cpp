<<<<<<< HEAD
#include <iostream>

int main(){

    double x, acc = 0;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc += x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n <<  " = " << acc << std::endl;

=======
#include <iostream>

int main(){

    double x, acc = 0;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc += x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n <<  " = " << acc << std::endl;

>>>>>>> efdb5ec (add gitignore)
}