<<<<<<< HEAD
#include <iostream>
#include<string>
int main(){
    int lo, hi;

    std::cout << "please enter range:" << std::endl;
    std::cin >> lo >> hi;



    while(lo < hi){
        int mid = lo + (hi-lo+1)/2;
        std::cout << "Is number lower than " << mid <<"?" << std::endl;
        std::string response = "";
        std::cin >> response;
        if (response =="y" || response == "yes"){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }

    std::cout << "number is : " << lo << std::endl;

=======
#include <iostream>
#include<string>
int main(){
    int lo, hi;

    std::cout << "please enter range:" << std::endl;
    std::cin >> lo >> hi;



    while(lo < hi){
        int mid = lo + (hi-lo+1)/2;
        std::cout << "Is number lower than " << mid <<"?" << std::endl;
        std::string response = "";
        std::cin >> response;
        if (response =="y" || response == "yes"){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }

    std::cout << "number is : " << lo << std::endl;

>>>>>>> efdb5ec (add gitignore)
}