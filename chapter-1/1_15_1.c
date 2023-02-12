#include <stdio.h>

int power(int m, int n);

int main() {
    int result = power(2, 10);
    
    printf("%d\n", result);

    return 0;
}

int power(int base, int n) {
    int i, output;
    output = 1;

    for (i=0; i<n; i++)
        output = output * base;
    
    return output;
}