/* File Name: reverse_input_lines_a_line_at_a_time.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 15:42:40
 */

#include <stdio.h>

#define MAXLINE 1000            /* maximum input line size */

int getlines(char line[], int maxline);
void reverse(char s[]);

/* reverse input lines a line at a time */
int main(void) {
    char line[MAXLINE];         /* current input line */

    while (getlines(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }

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

/* reverse: reverse string s */
void reverse(char s[]) {
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0')        /* find the end of string s */
        ++i;
    --i;                        /* back off from '\0' */
    if (s[i] == '\n')
        --i;                    /* leave newline in place */
    j = 0;                      /* beginning of new string s */
    while (j < i) {
         temp = s[j];
         s[j] = s[i];           /* swap the characters */
         s[i] = temp;
         --i;
         --j;
    }
}
