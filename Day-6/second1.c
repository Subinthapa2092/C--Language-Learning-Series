#include<stdio.h>
int main(){
    int i;
    FILE *fp;
    fp = fopen("output.txt","r");
    if(fp == NULL){
        printf("\n ERROR - Cannot open the destinaton file \n");
    }

else {
    int a;
    fscanf(fp,"%s",&a);
    printf("%s",a);
    fclose(fp);
}
return 0;
}