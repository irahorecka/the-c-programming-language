#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "This \t is a test \n okay...";
    int i;
    
    for (i=0; i < strlen(s); ++i) {
        if (s[i] == '\t') {
            printf("%s", "\\t");
        } else if (s[i] == '\n') {
            printf("%s", "\\n");
        } else {
            printf("%c", s[i]);
        }
    }
    return 0;
}
