#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open the source file
    fp = fopen(__FILE__, "r");

    // Check if file opened successfully
    if (fp == NULL) {
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }

    // Read and print the contents of the file character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
