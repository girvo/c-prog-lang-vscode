/**
 * Same as temp.c but using a `for` loop instead. Also doing the calculation within the printf
 * expression rather than with a lot of local variables
 *
 * @page 13
 */
#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}
