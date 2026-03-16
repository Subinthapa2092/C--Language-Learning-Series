// 93. Write a program to count the number of words and characters except whitespace characters in
// a file.
#include <stdio.h>

int main(){

    FILE *fp;
    char ch;
    int words = 0, chars = 0, inWord = 0;

    fp = fopen("q93_data.txt","r");

    while((ch = fgetc(fp)) != EOF){

        if(ch!=' ' && ch!='\n' && ch!='\t'){
            chars++;

            if(inWord == 0){
                words++;
                inWord = 1;
            }
        }
        else{
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Words = %d\n", words);
    printf("Characters (without spaces) = %d\n", chars);

    return 0;
}