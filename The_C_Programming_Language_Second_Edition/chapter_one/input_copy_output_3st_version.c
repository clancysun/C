/* File Name: input_copy_output_3st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:13:22
 */

#include <stdio.h>

#define NONBLANK 'a'

/* replace string of blanks with a single blank */
int main(void) {
    int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }

    return 0;
}

