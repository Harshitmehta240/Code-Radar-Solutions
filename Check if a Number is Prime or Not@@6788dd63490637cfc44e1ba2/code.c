// 
#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
for (i=2;i<n;i++){
    if(n%i==0)
    count=count+1;
}
if (count>=1)
{
    printf("Not Prime");
}
else
{
    printf("Prime");
}
return 0;
    }