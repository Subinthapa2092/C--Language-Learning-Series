// 54. Multiple Files Example
#include <stdio.h>

extern float num;

int main(){
    printf("Value from file1 = %f", num);
    return 0;
}
// In the Vs Code we use the gcc g54file.c  q54.c -o output
// Then the .\output to extend both files 
