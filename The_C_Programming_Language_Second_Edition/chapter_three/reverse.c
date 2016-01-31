/* File Name: reverse.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 18:23:57
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* reverse: reverse string s in place */
void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        //c = s[i], s[i] = s[j], s[j] = c;
    }
}
