/* File Name: convert_n_to_characters_in_s_modified.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 18:39:11
 */

#include <stdio.h>

#define abs(x) ((x) < 0 ? -(x) : (x))

int main(void) {

    return 0;
}

/* itoa: convert n to characters in s - modified */
void itoa(int n, char s[]) {
    int i, sign;
    void reverse(char s[]);

    sign = n;                       /* record sign */
    i = 0;
    do {                            /* generate digits in reverse order */
        s[i++] = abs(n % 10) + '0'; /* get next digit */
    } while ((n /= 10) != 0);       /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
