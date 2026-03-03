// 55. Macro for Area and Perimeter
#include <stdio.h>
#define AREA(l,b) (l*b)
#define PERI(l,b) (2*(l+b))

int main(){
    int l=5,b=4;
    printf("Area = %d\n", AREA(l,b));
    printf("Perimeter = %d", PERI(l,b));
}