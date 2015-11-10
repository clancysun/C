#include <stdio.h>

/*  输入 n，输出 (n+1)^2 的值  */

#define SQ(y) ((y) * (y))

void main(){
    int a, sq;
    printf("Input a number: ");
    scanf("%d", &a);
    sq = 200 / SQ(a + 1);
    printf("sq = %d\n", sq);
}
