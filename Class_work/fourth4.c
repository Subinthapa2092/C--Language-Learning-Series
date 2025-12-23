// /// A program in a C lanugague to to the menu driven Programm:
// #include<stdio.h>
// #include<stdlib.h>
// #define TRUE 1
// int main(){
//     int a,b,choice;

//     while(TRUE){
//         printf("\n------- Menu---------\n");
//         printf("1. Addition\n");
//         printf("2. Subtraction\n");
//         printf("3. Multiplication\n");
//         printf("4. Division\n");
//         printf("5. Modulus\n");
//         printf("6. Clear\n");
//         printf("7. Exist\n");
//         printf("Enter the choice Number From(1-7): ");
//         scanf("%d",&choice);
//         printf("Enter the two Number: ");
//         scanf("%d%d",&a,&b);
//         switch(choice){
//             case 1:
//             printf("Sum = %d",a+b);
//             break;
//             case 2:
//             printf("Subtraction = %d",a-b);
//             break;
//             case 3:
//             printf("Mult = %d",a*b);
//             break;
//             case 4:
//             printf("Division = %f",(float)a/b);
//             break;
//             case 5:
//             printf("Remainder= %d",a%b);
//             break;
//             case 6:
//             system("CLS");
//             break;
//             break;
//             case 7:
//             exit(0);

//             default:
//             printf("Wrong Choice: ");
//         }


//     }

// return 0;
// }
// using do while loop of menu driven: 
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
int main(){
    int a,b,choice;

    do{
        printf("\n------- Menu---------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Clear\n");
        printf("7. Exist\n");
        printf("Enter the choice Number From(1-7): ");
        scanf("%d",&choice);
        printf("Enter the two Number: ");
        scanf("%d%d",&a,&b);
        switch(choice){
            case 1:
            printf("Sum = %d",a+b);
            break;
            case 2:
            printf("Subtraction = %d",a-b);
            break;
            case 3:
            printf("Mult = %d",a*b);
            break;
            case 4:
            printf("Division = %f",(float)a/b);
            break;
            case 5:
            printf("Remainder= %d",a%b);
            break;
            case 6:
            system("CLS");
            break;
            break;
            case 7:
            exit(0);

            default:
            printf("Wrong Choice: ");
        }


    }while(choice!=7);

return 0;
}