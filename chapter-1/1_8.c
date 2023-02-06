#include <stdio.h>

int main() {
    int c, bl, tb, nl;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            bl++;
        if (c == '\t')
            tb++;
        if (c == '\n')
            nl++;
    }
    printf("Num blanks: %i; tabs %i; newlines %i", bl, tb, nl);
}