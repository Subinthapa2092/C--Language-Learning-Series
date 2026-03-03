#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp = fopen("input.txt", "r");
if(fp == NULL)
printf("\nERROR - Cannot open the destination file\n");
else
{
fseek(fp, 15, SEEK_SET); // fseek(fp, 10, 0);
fseek
ch = fgetc(fp);
printf("%c", ch);
fclose(fp);
}
}