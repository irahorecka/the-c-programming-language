#include <stdio.h>
#include <string.h>

int get_max_line(char line[]);

int main() {
    // Make a progam to count the longest line; a line can be anything that is delimited with a newline char
    char demo_string[200] = "This is a demonstration string\n I will attempt to count the longest line in this sentence.\n Test test.";
    int longestlen = get_max_line(demo_string);
    printf("The longest line in this demo program has a length of %i\n", longestlen);
    return 0;
}

int get_max_line(char line[]) {
    int c;
    int max = 0, temp = 0;
    for (c=0; c<strlen(line); c++) {
        if (line[c] == '\n') {
            if (temp > max)
                max = temp;
            temp = 0;
        } else {
            temp++;
        }
    }
    return max;
}