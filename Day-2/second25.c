/*
25. Given marks in five subjects. Write a program (a) to display “PASS” 
or “FAIL” if assumed
pass marks is 40 in each subject, (b) to find percentage 
of marks obtained, and (c) to find
division for “PASS” students only assuming that 80% and
 above for “DISTINCTION”, 60%
and above for “FIRST DIVISION” otherwise “SECOND”.
*/
#include<stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    //  A) Pass or Fail: 
    if (s1 < 40 || s2 < 40 || s3 < 40 || s4 < 40 || s5 < 40) {
        printf("FAIL\n");
    }
    else {
        printf("PASS\n");

        // (b) Percentage Calculation
        total = s1 + s2 + s3 + s4 + s5;
        percentage = (total / 500) * 100;

        printf("Percentage = %f\n", percentage);

        // (c) Division Doing
        if (percentage >= 80) {
            printf("DISTINCTION\n");
        }
        else if (percentage >= 60) {
            printf("FIRST DIVISION\n");
        }
        else {
            printf("SECOND DIVISION\n");
        }
    }

    return 0;
}
