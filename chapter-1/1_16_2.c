#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_max_line(char line[]);

int main() {
    // Make a progam to count the longest line; a line can be anything that is delimited with a newline char
    char demo_string[200] = "This is a demonstration string\n I will attempt to count the longest line in this sentence.\n Test test.";
    int longestlen = get_max_line(demo_string);
    printf("The longest line in this demo program has a length of %i\n", longestlen);
    return 0;
}

int get_max_line(char line[]) {
    int c, c_;
    int max = 0, temp = 0, newlineidx = 0;
    char maxline[MAXLINE];
    for (c=0; c<strlen(line); c++) {
        if (line[c] == '\n') {
            if (temp > max)
                max = temp;
                for (c_=0; c_<temp; c_++)
                    maxline[c_] = line[c_ + newlineidx];
            temp = 0;
            newlineidx = c;
        } else {
            temp++;
        }
    }
    printf("The longest line found is: %s\n", maxline);
    return max;
}