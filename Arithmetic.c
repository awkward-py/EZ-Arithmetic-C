#include <stdio.h>

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    // Check for division by zero
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // Perform arithmetic operations
    double resultAdd = add(num1, num2);
    double resultSubtract = subtract(num1, num2);
    double resultMultiply = multiply(num1, num2);
    double resultDivide = divide(num1, num2);
    
    // Display results
    printf("Sum: %.2f\n", resultAdd);
    printf("Difference: %.2f\n", resultSubtract);
    printf("Product: %.2f\n", resultMultiply);
    printf("Quotient: %.2f\n", resultDivide);
    
    return 0;
}
