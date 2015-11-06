#include <stdio.h>

/*  用条件表达式重新编程，输出两个数中的最大值  */

void main(){
    int a, b, max;

    printf("Input two number: ");
    scanf("%d %d", &a, &b);
    printf("max = %d\n", a > b ? a : b);
}
