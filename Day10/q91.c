//Question 1::  Write a program to append data to an existing file.
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("q91_data.txt","a");

    printf("Enter text: ");
    gets(text);

    fprintf(fp,"%s\n",text);

    fclose(fp);

    printf("Data appended successfully");

    return 0;
}