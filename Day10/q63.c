// 63. String Length
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the Character:: ");
    gets(str);
    printf("Length = %lu", strlen(str));
}