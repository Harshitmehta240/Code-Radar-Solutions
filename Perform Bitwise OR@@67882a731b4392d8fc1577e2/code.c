// Your code here...
#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    // Check if the numbers have opposite signs
    if (n * m < 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
