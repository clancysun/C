/* File Name: replace_tabs_with_the_proper_number_of_blanks.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 16:17:48
 */

#include <stdio.h>

#define TABINC 8                /* tab increment size */

/* replace tabs with the proper number of blanks */
int main(void) {
    int c, nb, pos;

    nb = 0;                     /* number of blanks necessary */
    pos = 1;                    /* position of character in line */
    while ((c = getchar()) != EOF) {
        if (c == '\t') {        /* tab character */
            nb = TABINC - (pos - 1) % TABINC;
            while (nb > 0) {
                putchar(' ');
                ++pos;
                --nb;
            }
        } else if (c == '\n') { /* newline character */
            putchar(c);
            pos = 1;
        } else {                /* all other character */
            putchar(c);
            ++pos;
        }
    }

    return 0;
}

