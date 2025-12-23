// program in a c langauge to to the used of the c langauge:
#include<stdio.h>
int main(){
    int a,b;
    int result;
    char op;
    printf("Enter the first and the second numbr: ");
    scanf(" %d%d",&a,&b);
    printf("Enter the operation which you want the (+,-,*,/ %) ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '%':
        result = a%b;
        printf("%d",result);
        break;
        default:
        printf("Invalid Operator");
    
    }
    return 0;
}