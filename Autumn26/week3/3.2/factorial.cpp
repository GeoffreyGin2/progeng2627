<<<<<<< HEAD
#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;

    int ans = 1;
    if (n == 0){
         std::cout << 1 << std::endl;
    }
    else{
        for(int i = n; i > 0; i--){
            ans = i*ans;
        }
    }
   

    std::cout << ans << std::endl;
=======
#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;

    int ans = 1;
    if (n == 0){
         std::cout << 1 << std::endl;
    }
    else{
        for(int i = n; i > 0; i--){
            ans = i*ans;
        }
    }
   

    std::cout << ans << std::endl;
>>>>>>> efdb5ec (add gitignore)
}