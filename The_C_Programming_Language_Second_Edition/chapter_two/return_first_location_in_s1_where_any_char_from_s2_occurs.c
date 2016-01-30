/* File Name: return_first_location_in_s1_where_any_char_from_s2_occurs.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 00:10:19
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* any: return first location in s1 where any char from s2 occurs */
int any (char s1[], char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])                 /* match found? */
                return i;                       /* location first match */
    return -1;                                  /* otherwise, no match */
}
