#include <stdio.h>
int main() {
    int n, i, j, num, space;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = 1;
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }

        num -= 2;

        for(j = 1; j < i; j++) {
            printf("%d", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}
