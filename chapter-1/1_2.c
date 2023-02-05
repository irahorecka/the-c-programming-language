#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    // Won't compile! C compiler does not recognize some of the listed escape sequences
    print("\c\b\m\n");
    return 0;
}
