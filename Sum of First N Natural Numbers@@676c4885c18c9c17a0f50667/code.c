#include <stdio.h>
int main() {
    int n,i,add;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        add=add+i;
    }
    printf("%d", add);
    return 0;
}