/* File Name: print_input_one_word_per_line.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 02:55:02
 */

#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0  /* outside a word */

/* print input one word per line */
int main(void) {
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');      /* finish the word */
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;             /* beginning of word */
            putchar(c);
        } else {
            putchar(c);
        }
    }

    return 0;
}

