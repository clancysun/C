#include <stdio.h>

/*  验证表达式getchar() != EOF的值0还是1  */
void main() {
    int c;

    c = getchar();
    printf("getchar() != EOF is: %d\n", (c != EOF));
}
