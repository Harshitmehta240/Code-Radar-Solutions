#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    
    if (n == 0 && m == 0)
    {
        printf("True\n");
    }
    else if (m == 0)
    {
        printf("False\n");
    }
    else if (n >= 0 && m < 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    return 0;
}
