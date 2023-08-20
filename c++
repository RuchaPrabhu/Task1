#include <iostream>

// Function to perform addition
double addition(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtraction(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiplication(double a, double b) {
    return a * b;
}

// Function to perform division
double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero" << std::endl;
        return 0;
    }
}

// Function to perform exponentiation
double exponentiation(double base, double exponent) {
    double result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to perform sine function
double sine(double angle) {
    const double pi = 3.142;
    angle = angle * pi / 180.0; 
    double result = angle;
    for (int i = 3; i <= 15; i += 2) {
        double term = exponentiation(angle, i) / factorial(i);
        if (i % 4 == 3) {
            result -= term;
        } else {
            result += term;
        }
    }

    return result;
}


int main() {
    double num1, num2;
    int operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Select operation:" << std::endl;
    std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exponentiation\n6. Sine" << std::endl;
    std::cin >> operation;

    double result;
    switch (operation) {
        case 1:
            result = addition(num1, num2);
            break;
        case 2:
            result = subtraction(num1, num2);
            break;
        case 3:
            result = multiplication(num1, num2);
            break;
        case 4:
            result = division(num1, num2);
            break;
        case 5:
            result = exponentiation(num1, num2);
            break;
        case 6:
            result = sine(num1);
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            return 1;
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}