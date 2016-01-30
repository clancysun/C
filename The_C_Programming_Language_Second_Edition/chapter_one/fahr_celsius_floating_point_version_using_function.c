/* File Name: fahr_celsius_floating_point_version_using_function.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 13:59:05
 */

#include <stdio.h>

float celsius(float fahr);

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */
int main(void) {
    float fahr;
    int lower, upper, step;

    lower = 0;              /* lower limit of temperature table */
    upper = 300;            /* upper limit */
    step = 20;              /* step size */

    fahr = lower;
    printf("fahr\tcelsius\n");
    while (fahr < upper) {
        printf("%3.0f\t%6.1f\n", fahr, celsius(fahr));
        fahr += step;
    }
    return 0;
}

/* celsius: convert fahr into celsius */
float celsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}
