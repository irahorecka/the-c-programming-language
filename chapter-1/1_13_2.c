#include <stdio.h>
#include <string.h>

#define IN 0
#define OUT 1

int main() {
    int state, i, j, wlen;
    char c;
    // char test_string[100] = "This is a test string - too doo loo";
    char test_string[100] = "This is yet another string - too doo loo";
    
    state = OUT;
    wlen = 0;
    for (i=0; i<strlen(test_string); i++) {
        c = test_string[i];
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            printf("Prev word count:");
            for (j=0; j<wlen; j++)
                printf("%c", '|');
            printf("%c", '\n');
            wlen = 0;
        } else if (state == OUT) {
            state = IN;
            ++wlen;
        } else {
            ++wlen;
        }
    }

    return 0;
}
