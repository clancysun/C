/* File Name: count_lines_words_characters.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:40:01
 */

#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0  /* outside a word */

/* count lines, words, and characters in input */
int main(void) {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("lines\twords\tcharacters\n");
    printf("%d\t%d\t%d\n", nl, nw, nc);

    return 0;
}

