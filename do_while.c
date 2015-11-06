#include <stdio.h>

/*  用do-while计算1加到100的值  */

void main(){
    int i = 1, sum = 0;

    do{
        sum += i;
        i++;
    }while(i <= 100);

    printf("%d\n", sum);
}
