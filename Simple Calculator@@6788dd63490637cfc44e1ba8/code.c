#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Read first number
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    // Read operator (consume any leading whitespace)
    if (scanf(" %c", &operator) != 1) {
        printf("Invalid operator\n");
        return 1;
    }

    // Read second number
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    // Perform the operation based on the operator
    if (operator == '+') {
        printf("%.2lf\n", num1 + num2);
    } else if (operator == '-') {
        printf("%.2lf\n", num1 - num2);
    } else if (operator == '*') {
        printf("%.2lf\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2lf\n", num1 / num2);
        } else {
            printf("Error\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
