// A program in a c- language to perfrom the 
// Write a program to print ASCII code for a character.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the the character which you want ASCII Code: ");
    scanf("%c",&ch);
    printf("The ASCII Code of the Character of %c is %d",ch,ch);
    return 0;
}