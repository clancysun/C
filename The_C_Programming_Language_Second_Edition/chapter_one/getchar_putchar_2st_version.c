/* File Name: getchar_putchar_2st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 01:05:04
 */

#include <stdio.h>

/* copy input to output;
 * 2st version
 */
int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}

