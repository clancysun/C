#include <stdio.h>

/*  统计空格、制表符与换行符的个数  */
void main() {
    int c, num = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ++num;
    printf("%d\n", num);
}
