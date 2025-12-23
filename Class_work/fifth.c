/// A program in a c language to do the reverse number using the C Language: 

// #include<stdio.h>
// int main(){
//     int number,rev=0,rem,n;
//     printf("Enter the number: ");
//     scanf("%d",&number);
//     n = number;
//     while(number !=0){
//         rem = number %10;
//         rev = rev*10+rem;
//         number = number/10;
//     }
//     if(n == rev){
//         printf("Palindrome Number");
//     }
//     else{
//         printf("NOt palindrome Number");
//     }

//     return 0;
// }

/// A Program in a C language to do the Armstrong Number:
/// A Sum of the number in the C language: 
// #include<stdio.h>
// int main(){
//     int num,sum =0,rem;
//     printf("Enter the Number: ");
//     scanf("%d",&num);
//     while(num !=0){
//         rem = num %10;
//         sum = sum+rem;
//         num = num /10;
//     }
//     printf("%d = Sum",sum);
//     return 0;
// }

// A Amstrong Number: 
#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,count =0,n1,n2;
    double sum=0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    n1 = num;
    while(n1!=0){
        count++;
        n1 /=10;
    }
    n2=num;
    while(n2 !=0){
        rem= n2 %10;
        sum +=pow(rem,count);
        n2 = n2/10;
    }
    if(num == (int)sum){
        printf("%d is  a Armstrong Number: ", num);
    }
    else{
        printf("%d is a NOt a Amstrong Number: ",num);
    }
    return 0;
}