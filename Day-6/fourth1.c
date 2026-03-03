#include<stdio.h>
int main(){
    FILE *in;
    in = fopen("test.txt","r");
    if(in == NULL){
        printf("Error Opening Input file !");
    }
    else{
        char ch;
        while(fscanf(in,"%c",&ch) != EOF)
        {
            printf("%c",ch);
        }
        fclose(in);
    }
    return 0;
}