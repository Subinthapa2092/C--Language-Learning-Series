// 85. Book Structure (n Books)
#include <stdio.h>

struct Book{
    char title[50];
    char author[50];
    float price;
};

int main(){
    int n,i;
    printf("Enter number of books: ");
    scanf("%d",&n);

    struct Book b[n];

    for(i=0;i<n;i++){
        printf("\nBook %d\n",i+1);
        scanf("%s",b[i].title);
        scanf("%s",b[i].author);
        scanf("%f",&b[i].price);
    }

    printf("\nBook Details:\n");
    for(i=0;i<n;i++){
        printf("%s %s %.2f\n",b[i].title,b[i].author,b[i].price);
    }
    return 0;
}