// 64. Convert to Uppercase
#include <stdio.h>

int main(){
    char str[100];
    printf("Enter the Words:: ");
    int i=0;
    gets(str);

    while(str[i]){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
        i++;
    }
    printf("%s",str);
}