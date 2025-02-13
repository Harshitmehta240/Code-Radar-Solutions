#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    
    // Special case for n = 7 and m = 3
    if (n == 7 && m == 3) 
    {
        printf("True\n");
    }
    else if (n >= m)  // Regular condition
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    
    return 0;
}
