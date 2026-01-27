// 2) Pass by the Address ::
#include<stdio.h>
int main(){
    int a = 50;
    void change(int *a);
    change(&a);
    printf("a = %d",a);
    return 0;

}
void change(int *x)
{
    *x = 60;
}