#include <stdio.h>

// Type in the terminal when the program is running to see results
int main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}