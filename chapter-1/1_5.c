#include <stdio.h>

/*
Print Farenheit-Celcius table for fahr = 0, 20, ..., 300;
Print in reverse
*/
int main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
    return 0;
}