// Your code here...
#include<stdio.h>

int main() {
    char n;
    scanf("%c", &n);
    int i;
    i=n;

    if (i<97 && i>65) {
        printf("Uppercase");
    } else if (i>97 && i<122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }

    return 0;
}