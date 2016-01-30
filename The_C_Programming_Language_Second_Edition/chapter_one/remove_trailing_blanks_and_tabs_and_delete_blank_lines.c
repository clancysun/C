/* File Name: remove_trailing_blanks_and_tabs_and_delete_blank_lines.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 15:19:00
 */

#include <stdio.h>

#define MAXLINE 1000                /* maximum input line size */

int getlines(char line[], int maxline);
int removes(char s[]);

/* remove trailing blanks and tabs, and delete blank lines */
int main(void) {
    char line[MAXLINE];             /* current input line */

    while (getlines(line, MAXLINE) > 0)
        if (remove(line) > 0)
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

/* remove trailing blanks and tabs from character string s */
int removes (char s[]) {
    int i;

    i = 0;
    while (s[i] != '\n')            /* find newline character */
        ++i;
    --i;                            /* back off from '\n' */
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i >= 0) {                   /* is it a nonblank line? */
        ++i;
        s[i] = '\n';                /* put newline character back */
        ++i;
        s[i] = '\0';                /* terminate the string */
    }

    return i;
}
