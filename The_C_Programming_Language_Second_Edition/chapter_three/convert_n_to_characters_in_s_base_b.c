/* File Name: convert_n_to_characters_in_s_base_b.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 18:46:10
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* itob: convert n to characters in s - base b */
void itob(int n, char s[], int b) {
    int i, j, sign;
    void reverse(char s[]);

    if ((sign = n) < 0)             /* record sign */
        n = -n;                     /* make n positive */
    i = 0;
    do {                            /* generate digits in reverse order */
        j = n % b;                  /* get next digit */
        s[i++] = (j <= 9) ? j+'0' : j+'a'-10;
    } while ((n /= b) > 0);         /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
