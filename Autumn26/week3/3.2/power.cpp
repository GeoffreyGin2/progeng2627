<<<<<<< HEAD
#include <iostream>

int main(){
    int x,n = 0;
    std::cin >> x >> n;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans = x*ans;
    }

    std::cout << ans << std::endl;
=======
#include <iostream>

int main(){
    int x,n = 0;
    std::cin >> x >> n;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans = x*ans;
    }

    std::cout << ans << std::endl;
>>>>>>> efdb5ec (add gitignore)
}