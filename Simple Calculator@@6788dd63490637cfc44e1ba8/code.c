// Your code here...
#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%.2lf\n", num1 + num2);
    } else if (operator == '-') {
        printf("%.2lf", num1 - num2);
    } else if (operator == '*') {
        printf("%.2lf", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2lf", num1 / num2);
        } else {
            printf("Error");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
