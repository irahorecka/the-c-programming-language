#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "This is a really long string with some chars.";
    int i;

    // A little different, but replace every black with two blanks
    for (i = 0; i < strlen(s); ++i) {
        if (s[i] == ' ') {
            printf("  ");
        } else {
            printf("%c", s[i]);
        }
    }
    return 0;
}
