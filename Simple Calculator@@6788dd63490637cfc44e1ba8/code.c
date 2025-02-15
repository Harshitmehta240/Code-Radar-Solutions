#include <stdio.h>

int main() {
    double num1, num2;
    char operator;
    scanf("%lf", &num1);
    scanf(" %c", &operator);  // Added a space before %c to handle any leading whitespace
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%.2lf\n", num1 + num2);  // Newline after the result
    } else if (operator == '-') {
        printf("%.2lf\n", num1 - num2);  // Newline after the result
    } else if (operator == '*') {
        printf("%.2lf\n", num1 * num2);  // Newline after the result
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2lf\n", num1 / num2);  // Newline after the result
        } else {
            printf("Error\n");  // Added newline after error
        }
    } 

    return 0;
}
