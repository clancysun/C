/* File Name: getchar_putchar_1st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 01:05:04
 */

#include <stdio.h>

/* copy input to output;
 * 1st version
 */
int main(void) {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}

