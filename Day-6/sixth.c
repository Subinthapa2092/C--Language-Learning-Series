#include<stdio.h>
int main(){
    FILE *in,*out;
    in = fopen("input.txt","r");
    if (in == NULL){
        printf("Error Opening in put file!");
    }
    else{
        int val,sum = 0,count = 0,avg;
        while(fscanf(in,"%d",&val) != EOF)
        {
            count ++;
            sum += val;
        }
        avg = (float)sum / count;
        out = fopen("output.txt","w");
        // printf("%f",avg);
        // printf("%d",sum);
        if (out == NULL){
        printf("Error Opening in put file!");
    }
    else{
        fprintf(out,"sum = %d\n Average = %f",sum,avg);
    }
        fclose(in);
    }
    return 0;
}