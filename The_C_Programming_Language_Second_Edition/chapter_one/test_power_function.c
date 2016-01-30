/* File Name: test_power_function.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 13:29:11
 */

#include <stdio.h>

int power(int m, int n);

/* test power function */
int main(void) {
    int i;

    for (i = 0; i < 10; i++) {
        printf("i power(2, i) power(-3, i)\n");
        printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 1; i <= n; i++)
        p *= base;

    return p;
}
