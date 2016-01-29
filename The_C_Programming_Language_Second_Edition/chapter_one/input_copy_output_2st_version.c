/* File Name: input_copy_output_2st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:09:20
 */

#include <stdio.h>

#define NONBLANK 'a'

/* replace string of blanks with a single blank */
int main(void) {
     int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        else if (lastc != ' ')
            putchar(c);
        lastc = c;
    }

   return 0;
}

