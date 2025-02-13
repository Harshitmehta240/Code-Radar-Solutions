// Your code here...
// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    int num,m;
    scanf("%d", &num);
    
    if (num%3==0 || num%5==0) {
        printf("Divisible by Both");}
    else if(num%3!=0 || num%5==0) {
        printf("Divisible BY 5");
    }
    else if(num%3==0 || num%5!=0) {
        printf("Divisible BY 3");
    }
    else
    {
        printf("Not Divisible");
    }

    return 0;
}
