/* File Name: delete_each_char_in_s1_which_is_in_s2.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 00:02:32
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* squeeze: delete each char in s1 which is in s2 */
void squeeze(char s1[], char s2[]) {
    int i, j, k;

    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[i] != '\0' && s2[j] != s1[i]; j++)
            ;
        if (s2[j] == '\0')              /* end of string - no match */
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}
