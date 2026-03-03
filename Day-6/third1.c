#include<stdio.h>
int main(){
    int i;
    FILE *fp;
    fp = fopen("subin.txt","r");
    if(fp == NULL){
        printf("\n ERROR - Cannot open the destinaton file \n");
    }
    else{
        int a, sum = 0;
        while(fscanf(fp,"%d",&a) != -1){
            sum += a;
        }
        printf("sum = %d",sum);
        fclose(fp);
    }
    return 0;
}