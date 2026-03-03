// 88. Complex Number Addition
#include <stdio.h>

struct Complex{
    float real, imag;
};

struct Complex add(struct Complex a, struct Complex b){
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main(){
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);

    // Display result
    printf("\nSum of %.2f + %.2fi and %.2f + %.2fi = %.2f + %.2fi\n",
           c1.real, c1.imag, c2.real, c2.imag, sum.real, sum.imag);

    return 0;
}