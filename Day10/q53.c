// 53. Static Variable Function Call Counter
#include <stdio.h>

void count(){
    static int c=0;
    c++;
    printf("Function called %d times\n",c);
}

int main(){
    count();
    count();
    count();
}