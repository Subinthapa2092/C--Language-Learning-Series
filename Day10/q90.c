//  Q.no 90 
// Write a program to copy contents of one file to another.
//  Your program should also display
// contents of input file on the screen.
#include <stdio.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file for reading
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Cannot open input file.\n");
        return 1;
    }
    // Open output file for writing
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Cannot open output file.\n");
        return 1;
    }

    // Copy and display
    while ((ch = fgetc(in)) != EOF) {
        fputc(ch, out); 
        printf("%c", ch);
    }

    printf("\nFile copied successfully!\n");

    fclose(in);
    fclose(out);

    return 0;
}