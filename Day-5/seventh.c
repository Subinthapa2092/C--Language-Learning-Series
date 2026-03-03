// Question 85

#include<stdio.h>
#define N 100
int main()
{
    struct book{
        char title[50];
        char author[20];
        float price;
    };
    struct book b[N];
    int n,i;
    printf("How many Books ? ");
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        printf("Enter the data of book %d\n",i+1);
        printf("Enter the title of the books\n");
        scanf("%[^\n]",b[i].title);
        printf("Enter the author of hte books\n");
        scanf("%[^\n]",b[i].author);
        printf("Enter the book Price;\n");
        scanf("%f",&b[i].price);
    }
    printf("Books Details:\n");
    for(i = 0;i<n;i++){
        printf("Enter the data of book %d\n",i+1);
        printf("%s\n",b[i].title);
        printf("%s\n",b[i].author);
        printf("%f\n",b[i].price);
    }

return 0;
}