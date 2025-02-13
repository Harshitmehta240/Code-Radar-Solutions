// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    int num,m;
    scanf("%d", &num);
    scanf("%d", &m);
    
    if (num == m) {
        printf("Equal");}
    else if(num>m) {
        printf("First");
    }
    else
    {
        printf("Second");
    }

    return 0;
}
