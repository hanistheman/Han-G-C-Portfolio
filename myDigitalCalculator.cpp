#include <iostream>
#include <typeinfo>
#include <cmath>

/* This program I will be using to help me better understand how exceptions
 * as well as conditionals like if/else work in C++. I will achieve this by
 * creating a simple digital calculator to help me understand better. */

#include <iostream>
#include <stdexcept>

double add(double a, double b) {
    return a + b;
}
// User created function for adding two numbers
double subtract(double a, double b) {
    return a - b;
}
// User created function for subtracting two numbers
double multiply(double a, double b) {
    return a * b;
}
// User created function for multiplication
double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return a / b;
}
// Division function. Note the error that it throws if the divisor is 0.
double exponentiation(double a, double b) {
    return pow(a, b);
}
// Function for calculating exponents
double rooting(double a, double b){
    double c = 1/b;
    // Temp variable for calculating the nth root of a number.
    if (a < 0) {
        throw std::runtime_error("Taking the root of a negative number is not allowed.");
    }
    // Exception for if the user enters a value that is negative.
    return pow(a,c);
    // Here I am doing a function where you can calculate the root(square root, cube root, etc)
    // of any two numbers. I am doing this by using pow(a, 1/b).
}
int main() {
    try {
        double num1, num2;
        char op;

        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter an operator (+, -, *, /, ^, r): ";
        std::cin >> op;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        double result;

        switch (op) {

            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            case '^':
                result = exponentiation(num1, num2);
                break;
            case 'r':
                result = rooting(num1, num2);
                break;
            default:
                throw std::invalid_argument("Invalid operator.");
        }
        // Switch statement for which operation the user would like to perform.
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}