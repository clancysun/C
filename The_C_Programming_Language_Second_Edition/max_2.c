#include <stdio.h>

/*  只使用if语句来求两个数中的较大值  */

void main() {
    int a, b, max;

    printf("输入两个整数：");
    scanf("%d %d", &a, &b);

    max = b;                // 假设b最大
    if (a > b) max = a;     // 如果a > b，那么更改max的值
    printf("%d和%d的较大值是：%d\n", a, b, max);
}
