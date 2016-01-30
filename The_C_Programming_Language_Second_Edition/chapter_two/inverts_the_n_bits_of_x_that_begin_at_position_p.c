/* File Name: inverts_the_n_bits_of_x_that_begin_at_position_p.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 00:26:37
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* invert: inverts the n bits of x that begin at position p */
unsigned invert(unsigned x, int p, int n) {
    return x ^ (~(~0 << n) << (p + 1 - n));
}
