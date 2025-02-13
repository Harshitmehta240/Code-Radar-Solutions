// Your code here...
#include <stdio.h>
int main() {
    int n ,i;
    scanf("%d",&n);
    scanf("%d",&i);
    if (n>=0 && i>=0)
    {
    printf("Same Sign");}
    else if(n<0 && i<0)
{
    printf("Same Sign");
}
else
{
    printf("Different Sign")
}
    return 0;
}