/* File Name: convert_hexadecimal_string_s_to_integer.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 23:28:44
 */

#include <stdio.h>

#define YES 1
#define NO 0

/* convert hexadecimal string s to integer */
int htoi(char s[]) {
    int hexdigit, i, inhex, n;

    i = 0;
    if (s[i] == '0') {              /* skip optional 0x or 0X */
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
    }
    n = 0;                          /* integer value to be returned */
    inhex = YES;                    /* assume valid hexadecimal digit */
    for ( ; inhex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            hexdigit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        else
            inhex = NO;             /* not a valid hexadecimal digit */
        if (inhex == NO)
            n = 16 * n + hexdigit;
    }
    return n;
}

int main(void) {

    return 0;
}

