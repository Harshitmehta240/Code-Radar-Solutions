// Your code here...
#include <stdio.h>

int main() {
    double num1, num2;
    char operator;
    scanf("%lf", &num1);
    scanf(" %c", &operator);
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
    } 

    return 0;
}
