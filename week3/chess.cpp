#include <iostream>
#include <cmath>
int main(){
    int x1, y1, x2, y2;
    std:: cout << "Enter the coordinates of the knight initially" << std::endl;
    std:: cin >> x1 >> y1;
    std:: cout << "Enter the coordinates of the knight after" << std::endl;
    std:: cin >> x2 >> y2;

    if(0 < x1 <= 8 && 0 < x2 <=8 && 0 < y1 <=8 && 0 < y2 <=8){
        int dist1 = abs(x2 - x1);
        int dist2 = abs(y2-y1);
        if (dist1 == 1){
            if(dist2 == 2){
                 std::cout << "Valid move" << std::endl;
            }
            else{
                 std::cout << "Invalid move" << std::endl;
            }
        }
        else if (dist2 == 1){
            if(dist1 == 2){
                 std::cout << "Valid move" << std::endl;
            }
            else{
                 std::cout << "Invalid move" << std::endl;
            }
        }
        else{
            std::cout << "Invalid move" << std::endl;
        }
    }
    else{
        std::cout << "Invalid move" << std::endl;
    }
}