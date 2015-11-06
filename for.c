#include <stdio.h>

/*  用for循环来计算1回到100的值  */

void main(){
    int i, sum = 0;

    for(i = 1; i <= 100; i++)
        sum += i;

    printf("%d\n", sum);
}
