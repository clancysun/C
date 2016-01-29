#include <stdio.h>

/*  输出两个数中较大的数  */

#define MAX(a, b) (a > b) ? a : b

void main(){
    int x, y, max;
    printf("Input two number: ");
    scanf("%d %d", &x, &y);
    max = MAX(x, y);
    printf("max = %d\n", max);
}
