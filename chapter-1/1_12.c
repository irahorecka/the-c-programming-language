#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "This is yet another sentence to be played with.";
    int i;

    for (i=0; i<strlen(s); ++i) {
        if (s[i] == ' ') {
            printf("%c", '\n');
        } else {
            printf("%c", s[i]);
        }
    }
    return 0;
}
