#include <stdio.h>

/*
Print Celsius-Farenheit table for celsius = 0, 20, ..., 300;
*/
int main() {
    float celsius, fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5) * celsius + 32.0;
        // The .%d indicates the floating point percision to print to console
        printf("%3.0f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}