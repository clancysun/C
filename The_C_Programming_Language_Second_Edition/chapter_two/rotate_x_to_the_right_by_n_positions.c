/* File Name: rotate_x_to_the_right_by_n_positions.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 00:29:36
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* rightrot: rotate x to the right by n positions */
unsigned rightrot (unsigned x, int n) {
    int wordlength(void);
    int rbit;                           /* rightmost bit */

    while (n-- > 0) {
        rbit = (x & 1) << (wordlength() - 1);
        x = x >> 1;                     /* shift x 1 position right */
        x = x | rbit;                   /* complete one rotation */
    }

    return x;
}

/* wordlength: computes word length of the machine */
int wordlength(void) {
    int i;
    unsigned v = (unsigned) ~0;

    for (i = 1; (v = v >> 1) > 0; i++)
        ;

    return i;
}
