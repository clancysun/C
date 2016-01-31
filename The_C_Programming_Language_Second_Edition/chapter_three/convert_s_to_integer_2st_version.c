/* File Name: convert_s_to_integer_2st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 18:15:02
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* atoi: convert s to integer 2st version */
int atoi (char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++)         /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')         /* skip sign */
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');

    return sign * n;
}
