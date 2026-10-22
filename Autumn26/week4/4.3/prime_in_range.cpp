#include <iostream>
int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
        }

        return 0;

    }
}

void prime_in_range(int a, int b){
    for(int i = a;i <=b; i++){
        if(smallest_factor(i) == 0){
            std::cout << i << std::endl;
        }
    }
    return;
}
int main(){
    int a,b;
    std::cin >> a >> b;
    prime_in_range(a,b);
}