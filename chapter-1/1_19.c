#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverse(char input[]);

int main() {
    // Write a program to reverse an input line and print to console
    char demo_string[200] = "This is a demonstration string.";
    reverse(demo_string);
    return 0;
}

void reverse(char input[]) {
    int c;
    int len_input = strlen(input);
    char reverseArray[MAXLINE];

    printf("Here's your reversed string: ");
    for (c=0; c<=len_input; c++)
        printf("%c", input[len_input - c]);
    printf("%c", '\n');
}