#include <stdio.h>
#include <string.h>

int main() {
    int i, j, letter, letters;
    letters = 26;
    int alphabet[letters];
    char test_string[150] = "this is a test string to prove we can count char frequencies";
    char c;

    // You must initialize the array first!
    for (i=0; i<letters; i++)
        alphabet[i] = 0;
    for (i=0; i<strlen(test_string); i++) {
        c = test_string[i];
        if (c >= 'a' || c <= 'z')
            ++alphabet[c - 'a'];
    }
    for (i=0; i<letters; i++) {
        letter = alphabet[i];
        printf("Letter:");
        for (j=0; j<letter; j++)
            printf("%c", '|');
        printf("%c", '\n');
    }

    return 0;
}