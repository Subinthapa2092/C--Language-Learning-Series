// 66. Reverse String
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i,len;
    printf("Enter the Words:: ");
    gets(str);
    len=strlen(str);

    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
}