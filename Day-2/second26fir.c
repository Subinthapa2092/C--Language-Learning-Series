// 26. Admission to a professional course is subject to 
// the following conditions.
// a) Marks in mathematics >=60
// b) Marks in physics >=50
// c) Marks in chemistry >=40
// d) Total in all three subjects >=200


 // Or question related: 
 /*
 Total in mathematics and physics>=150
Given the marks in three subjects, write a program to process 
the applications to list eligible
candidates.
 */
#include<stdio.h>

int main() {
    float math, physics, chemistry, total;

    printf("Enter marks in Mathematics, Physics and Chemistry: ");
    scanf("%f %f %f", &math, &physics, &chemistry);

    total = math + physics + chemistry;

    if (math >= 60 && physics >= 50 && chemistry >= 40 && total >= 200) {
        printf("The candidate is eligible for admission");
    }
    else {
        printf("The candidate is NOT eligible for admission");
    }

    return 0;
}


// #include<stdio.h>

// int main() {
//     float math, physics, chemistry, total_math_phy;

//     printf("Enter marks in Mathematics, Physics and Chemistry: ");
//     scanf("%f %f %f", &math, &physics, &chemistry);

//     total_math_phy = math + physics;

//     if (math >= 60 && physics >= 50 && chemistry >= 40 && total_math_phy >= 150) {
//         printf("The candidate is eligible for admission.\n");
//     }
//     else {
//         printf("The candidate is NOT eligible for admission.\n");
//     }

//     return 0;
// }
