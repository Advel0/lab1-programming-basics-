#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>


int main()
{
    float triangleSide1, triangleSide2, triangleAngle, temp = 0;
    std::string flag = "";
    while (true) {
        std::cout << "Enter first side:";
        std::cin >> triangleSide1;
        std::cout << "Enter second side:";
        std::cin >> triangleSide2;
        std::cout << "Enter angle:";
        std::cin >> temp; 
        triangleAngle = (temp / 180 )* M_PI;

        if (triangleAngle == 0 || triangleSide1 == 0 || triangleSide2 == 0) {
            std::cout << "Error (incorrect data). Try again";
            continue;
        }
        std::cout  << 0.5 * triangleSide1 * triangleSide2 * sin(triangleAngle) << '\n';
        std::cout << "Countinue ?(y/n): ";
        std::cin >> flag;
        if (flag == "n") {
            break;
        }
    }
}
