// Your code here...
#include <stdio.h>
int main() {
    int n ,i;
    scanf("%d",&n);
    if (n==1)
    {
    printf("Monday");}
     if (n==2)
    {
    printf("Tuesday");}
     if (n==3)
    {
    printf("Wednesday");}
     if (n==4)
    {
    printf("Thursday");}
     if (n==5)
    {
    printf("Friday");}
     if (n==6)
    {
    printf("Saturday");}
     if (n==7)
    {
    printf("Sunday");}
    if(n>7 || n==0)
    {
        printf("Invalid");
    }

    return 0;
}