#include <stdio.h>

/*  统计空格、制表符与换行符的个数  */
void main() {
    int c, nb, nt, nl;

    nb = 0;                         /* number of blanks   */
    nt = 0;                         /* number of tabs     */
    nl = 0;                         /* number of newlines */

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    printf("blanks\ttabs\tnewlines\n");
    printf("%d\t%d\t%d\n", nb, nt, nl);
}
