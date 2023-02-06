#include <stdio.h>

int main() {
    int c;
    // For the assignment print EOF
    printf("The value of EOF is %i\n", EOF);
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}