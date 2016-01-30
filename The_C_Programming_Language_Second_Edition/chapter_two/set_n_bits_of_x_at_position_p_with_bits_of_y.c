/* File Name: set_n_bits_of_x_at_position_p_with_bits_of_y.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 00:20:41
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* set n bits of x at position p with bits of y */
unsigned setbits (unsigned x, int p, int n, unsigned y) {
    return x & ~(~(~0 << n) << (p + 1 - n)) |
        (y & ~(~0 << n)) << (p + 1 -n);
}
