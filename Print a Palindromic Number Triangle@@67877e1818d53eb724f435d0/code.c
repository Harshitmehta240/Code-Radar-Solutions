#include <stdio.h>
int main() {
    int n, i, j, k, num;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = i;
        for(j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        num -= 2;
        for(k = 1; k < i; k++) {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
