#include <iostream>
using namespace std;

int main() {

    /* This program I am using to help me learn about operators in C++,
    as well as also constant variables and how to properly use them.
    Along with properly naming variables and user input.*/

    // For this, I will demonstrate using constant variables,
    // mainly to, for example, figure out the area/circumference of a circle.
    const double pi = 3.14;
    double circleRadius;
    // Using 10 as a demonstration number.
    std::cout << "Enter the radius of the circle, please: \n";
    cin >> circleRadius;
    // This is what I am using to read user input
    double circumference = 2 * pi * circleRadius;
    double circleArea = pi * pow(circleRadius, 2);
    std::cout << "A circle with radius " << circleRadius <<" has a circumference of " << circumference << " units.\n";
    std::cout << "A circle with radius " << circleRadius <<" has an area of " << circleArea << " units squared. \n";
    return 0;

}
