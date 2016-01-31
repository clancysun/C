/* File Name: count_1_bits_in_x_faster_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 16:43:57
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* count 1 bits in x faster version */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x &= x - 1)
        ++b;

    return b;
}
