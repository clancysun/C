#include <stdio.h>

/*  求两个数中的较大值  */

void main() {
    int a, b, max;

    printf("输入两个整数：");
    scanf("%d %d", &a, &b);
    if (a > b) max = a;
    else max = b;
    printf("%d和%d的较大值是：%d\n", a, b, max);
}
