/* File Name: convert_n_to_characters_in_s.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 18:34:17
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* itoa: convert n to characters in s */
void itoa (int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0)             /* record sign */
        n = -n;                     /* make n positive */
    i = 0;
    do {                            /* generate digits in reverse order */
        s[i++] = n % 10 + '0';      /* get next digit */
    } while ((n /= 10) > 0);        /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
