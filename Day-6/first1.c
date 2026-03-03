#include<stdio.h>
int main(){
    int i;
    FILE *fp;
    fp = fopen("output.txt","w");
    if(fp == NULL){
        printf("\n ERROR - Cannot open the destinaton file \n");
    }
    else{
        fprintf(fp,"%s","Subin Thapa");
        fclose(fp);
    }
    return 0;
}