// Your code here...
#include <stdio.h>
int main() {
    int n ,j;
    scanf("%d",&n);
    scanf("%d",&j);
    if(n>j)
    {
    printf("Profit");
    }
    else if(n<j)
    {
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}