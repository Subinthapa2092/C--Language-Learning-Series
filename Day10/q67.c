// 67. Check Palindrome String
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the words:: ");
    int i, flag=1;
    gets(str);

    int len=strlen(str);

    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}