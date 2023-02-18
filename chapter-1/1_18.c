#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void stripline(char input[]);

int main() {
    // Make a program to strip trailing tabs, newlines, and spaces
    int c;
    char demo_string[200] = "This is a demonstration string. \t \n";
    stripline(demo_string);
    return 0;
}

void stripline(char input[]) {
    int c;
    int lastidx = strlen(input) - 1;
    char striparr[MAXLINE];
    char lastitem[1];
    lastitem[0] = input[lastidx];
    
    while (lastitem[0] == '\n' || lastitem[0] == '\t' || lastitem[0] == ' ') {
        lastidx = lastidx - 1;
        lastitem[0] = input[lastidx];
    }
    for (c=0; c<=lastidx; c++)
        striparr[c] = input[c];
    printf("%s\n", striparr);
}