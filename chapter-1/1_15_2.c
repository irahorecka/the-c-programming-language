#include <stdio.h>

float cels_to_fahr(float cels);

int main() {
    float fahr, cels;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    // Type casting - cels will remain a float even though it is incrementing by an int
    for (cels=0.0; cels<upper; cels=cels+step) {
        printf("Fahr: %.1f; Cels: %.1f\n", cels_to_fahr(cels), cels);
    }
    return 0;
}

float cels_to_fahr(float cels) {
    return ((9.0/5.0) * cels) + 32.0;
}