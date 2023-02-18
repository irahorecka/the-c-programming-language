#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
#define LIMIT 30

void printline(char input[], int maxline);

int main() {
    // Print lines if a line is over 80 char long
    int c;
    int newidx = 0;
    char templine[MAXLINE];
    char demo_string[200] = "This is a demonstration string\nI will attempt to count the longest line in this sentence.\nTest test.";
    for (c=0; c<strlen(demo_string); c++) {
        if (demo_string[c] == '\n') {
            int tempidx = 0;
            for (newidx; newidx < c; newidx++) {
                templine[tempidx] = demo_string[newidx];
                tempidx++;
            }
            printline(templine, LIMIT);
            memset(&templine[0], 0, sizeof(templine));
            char templine[MAXLINE];
        }
    }

    return 0;
}

void printline(char input[], int limit) {
    if (strlen(input) > limit)
        printf("%s\n", input);
}