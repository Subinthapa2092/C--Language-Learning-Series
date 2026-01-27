// Passing Arguments to Function::: 
// 1) Pass by Value(or Call by Value )
#include<stdio.h>
int main(){
    int a = 50;
    void change(int a);
    change(a);
    printf("a = %d",a);
    return 0;

}
void change(int x)
{
    x = 60;
}
