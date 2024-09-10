// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2;
    int sum, difference, product, remainder;
    float quotient;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        remainder = num1 % num2;
    }
    else {
        printf("Error: Division by zero is not allowed.\n");
        return 1;  // Exit with an error code
    }

    // output add, subtract, multiple, divide and the remainder of two integers.
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", quotient);  // Display quotient to two decimal places
    printf("Remainder: %d\n", remainder);

    return 0;
}
