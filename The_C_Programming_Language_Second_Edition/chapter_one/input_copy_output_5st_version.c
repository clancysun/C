/* File Name: input_copy_output_5st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:26:10
 */

#include <stdio.h>

/* replace tabs and backspaces with visible characters */
int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }

    return 0;
}

