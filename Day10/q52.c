// 52. Reverse String Using Recursion
#include <stdio.h>

void reverse(){
    char ch;
    ch = getchar();
    if(ch!='\n'){
        reverse();
        putchar(ch);
    }
}

int main(){
    printf("Enter text: ");
    reverse();
}