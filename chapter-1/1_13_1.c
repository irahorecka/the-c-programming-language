#include <stdio.h>
#include <string.h>


// Count the number of occurrences of each digit, whitespace, and all characters
int main() {
    int c, i, nwhite, nother;
    int ndigits[10];
    char test_string[100] = "This is a test 12345, 1234, 123.";
    nwhite = nother = 0;
    // Initialize array
    for (i=0; i<10; i++) {
        ndigits[i] = 0;
    }
    for (i=0; i<strlen(test_string); i++) {
        // Count digits
        if (test_string[i] >= '0' && test_string[i] <= '9') {
            ++ndigits[test_string[i]-'0'];
        }
        else if (test_string[i] == ' ') {
            nwhite = nwhite + 1;
        } else {
            nother = nother + 1;
        }
    }
    // Print to console
    for (i=0; i<10; i++)
        printf("%d", ndigits[i]);
    printf("%c", '\n');
    printf("Number of whitespace: %d\n", nwhite);
    printf("Number of other char: %d\n", nother);

    return 0;
}
