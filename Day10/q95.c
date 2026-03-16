// 95. Write a program that reads all numbers from the input file input.dat and store the sum and
// average of these numbers in an output file named as output.dat.
#include <stdio.h>

int main(){

    FILE *in,*out;
    int num,sum=0,count=0;
    float avg;

    in = fopen("input.dat","r");

    while(fscanf(in,"%d",&num)!=EOF){
        sum += num;
        count++;
    }

    avg = (float)sum/count;

    out = fopen("output.dat","w");

    fprintf(out,"Sum = %d\n",sum);
    fprintf(out,"Average = %.2f\n",avg);

    fclose(in);
    fclose(out);

    printf("Result stored in output.dat");

    return 0;
}