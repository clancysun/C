#include <stdio.h>

/*  指定标识符M来代替表达式(y*y+3*y)  */

#define M (n * n + 3 * n)

void main(){
    int sum, n;
    printf("Input a number: ");
    scanf("%d", &n);
    sum = 3 * M + 4 * M + 5 * M;
    printf("sum = %d\n", sum);
}
