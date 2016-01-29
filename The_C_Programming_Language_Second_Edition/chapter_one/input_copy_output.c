/* File Name: input_copy_output.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:00:27
 */

#include <stdio.h>

#define NONBLANK 'a'

/* replace string of blanks with a single blank */
int main(void) {
    int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);
        lastc = c;
    }

    return 0;
}

