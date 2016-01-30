/* File Name: print_lines_longer_than_LONGLINE.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 15:03:34
 */

#include <stdio.h>

#define MAXLINE 1000            /* maximum input line size */
#define LONGLINE 80

int getlines(char line[], int maxline);

/* print lines longer than LONGLINE */
int main(void) {
    int len;                    /* current line length */
    char line[MAXLINE];         /* current input line */

    while ((len = getlines(line, MAXLINE)) > 0)
        if (len > LONGLINE)
            printf("%s", line);

    return 0;
}

/* getlines: read a line into s, return length */
int getlines(char s[], int lim) {
    int c, i, j;

    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 2) {
            s[j] = c;           /* line still in boundaries */
            ++j;
        }
    if (c == '\n') {
         s[j] = c;
         ++j;
         ++i;
    }
    s[j] = '\0';
    return i;
}
