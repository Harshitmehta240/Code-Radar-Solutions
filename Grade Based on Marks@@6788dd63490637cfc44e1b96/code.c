#include <stdio.h>
int main() {
    int n ;
    if(n>=90)
    {
    printf("A");
    }
    if(n<90 && n>=80)
    {
        printf("B");
    }
    if(n<80 && n>=70)
    {
        printf("C");
    }
    if(n<70 && n>=60)
    {
        printf("D");

    }
    else
    {
        printf("F");
    }
    return 0;
}