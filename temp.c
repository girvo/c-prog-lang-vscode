#include <stdio.h>

int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;    /* lower limit of temp table */
    upper = 300;  /* upper limit */
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}
