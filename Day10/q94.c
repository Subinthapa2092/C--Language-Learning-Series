// 94. Write a program to count number of vowels, number of consonants, number of digits, and
// number of whitespaces in a file.
#include <stdio.h>

int main(){

    FILE *fp;
    char ch;
    int vowels=0, consonants=0, digits=0, spaces=0;

    fp = fopen("q94_data.txt","r");

    while((ch=fgetc(fp))!=EOF){

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowels++;
        }

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            consonants++;
        }

        else if(ch>='0' && ch<='9'){
            digits++;
        }

        else if(ch==' '){
            spaces++;
        }
    }

    fclose(fp);

    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",consonants);
    printf("Digits = %d\n",digits);
    printf("Spaces = %d\n",spaces);

    return 0;
}