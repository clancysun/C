/* File Name: input_copy_output_4st_version.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:19:04
 */

#include <stdio.h>

/* replace tabs and backspaces with visible characters */
int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        if (c != '\b')
            if (c != '\t')
                if (c != '\\')
                    putchar(c);
    }

    return 0;
}

