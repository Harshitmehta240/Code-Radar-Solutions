// Your code here...
// Your code here...
#include <stdio.h>
int main() {
    int n ,j,i;
    scanf("%d",&n);
    scanf("%d",&j);
    scanf("%d",&i);
    if(n==j && n==i && i==j)
    {
    printf("Equilateral");
    }
    else if(n==j || n==i || i==j)
    {
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}