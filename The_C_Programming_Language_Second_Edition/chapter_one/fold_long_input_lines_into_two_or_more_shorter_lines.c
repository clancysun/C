/* File Name: fold_long_input_lines_into_two_or_more_shorter_lines.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-30 16:38:45
 */

#include <stdio.h>

#define MAXCOL 10               /* maximum column of input */
#define TABINC 8                /* tab increment size */

char line[MAXCOL];              /* input line */

int exptab(int pos);
int findblnk(int pos);
int newpos(int pos);
void printl(int pos);

/* fold long input lines into two or more shorter lines */
int main(void) {
    int c, pos;

    pos = 0;                    /* position in the line */
    while ((c = getchar()) != EOF) {
        line[pos] = c;          /* store current character */
        if (c == '\t')          /* expand tab character */
            pos = exptab(pos);
        else if (c == '\n') {
            printl(pos);        /* print current input line */
            pos = 0;
        } else if (++pos >= MAXCOL) {
            pos = findblnk(pos);
            printl(pos);
            pos = newpos(pos);
        }
    }

    return 0;
}

/* printl: print line untill pos column */
void printl(int pos) {
     int i;
     for (i = 0; i < pos; ++i)
         putchar(line[i]);
     if (pos > 0)               /* any chars printed? */
         putchar('\n');
}

/* exptab: expand tab into blanks */
int exptab(int pos) {
     line[pos] = ' ';           /* tab is at least one blank */
     for (++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
         line[pos] = ' ';
     if (pos < MAXCOL)          /* room left in current line */
         return pos;
     else {                     /* current line is full */
         printl(pos);
         return 0;              /* reset current position */
     }
}

/* findblnk: find blank's position */
int findblnk(int pos) {
     while (pos > 0 && line[pos] != ' ')
         --pos;
     if (pos == 0)              /* no blanks in the line? */
         return MAXCOL;
     else                       /* at least one blank */
         return pos + 1;
}

/* newpos: rearrange line with new position */
int newpos(int pos) {
     int i, j;

     if (pos <= 0 || pos >= MAXCOL)
         return 0;              /* noting to rearrange */
     else {
         i = 0;
         for (j = pos; j < MAXCOL; ++j) {
             line[i] = line[j];
             ++i;
         }
         return i;              /* new position in line */
     }
}
