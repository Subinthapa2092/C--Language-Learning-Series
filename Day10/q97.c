// 97. Write a program to display 6th character and 2nd last character from random access file.
#include <stdio.h>

int main(){

    FILE *fp;
    char ch;

    fp = fopen("q97_data.txt","r");

    fseek(fp,5,SEEK_SET);
    ch = fgetc(fp);
    printf("6th character = %c\n",ch);

    fseek(fp,-2,SEEK_END);
    ch = fgetc(fp);
    printf("2nd last character = %c\n",ch);

    fclose(fp);

    return 0;
}