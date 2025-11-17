#include<stdio.h>
int main(){
    char name[200];
    
    fgets(name,sizeof(name),stdin);
    puts(name);
    return 0;
}
