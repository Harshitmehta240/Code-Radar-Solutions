#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  // Read the number n from user input

    for(i = 1; i <= 10; i++) {
        printf("%d × %d = %d\n", n, i, n * i);  // Print the multiplication table
    }

    return 0;
}
