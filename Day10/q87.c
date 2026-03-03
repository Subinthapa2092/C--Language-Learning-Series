// 87. Time Structure (Compare & Add)
#include <stdio.h>

struct Time{
    int hour, minute, second;
};

int main(){
    struct Time t1,t2,sum;

    scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
    scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);

    sum.second = t1.second + t2.second;
    sum.minute = t1.minute + t2.minute + sum.second/60;
    sum.second %= 60;

    sum.hour = t1.hour + t2.hour + sum.minute/60;
    sum.minute %= 60;

    printf("Added Time = %d:%d:%d\n",sum.hour,sum.minute,sum.second);

    if(t1.hour>t2.hour)
        printf("Time1 is greater");
    else
        printf("Time2 is greater or equal");
}