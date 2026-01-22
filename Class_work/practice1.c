// Program string 1st::

#include<stdio.h>
int  main(void)
{
    char name[40][15];
    int i ;
    for(i = 0;i<40;i++)
    {
        printf("Enter the name:: \n");
        gets(name[i]);
    }
    return 0;
}