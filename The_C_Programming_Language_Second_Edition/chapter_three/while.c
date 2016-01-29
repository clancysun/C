#include <stdio.h>

/*  用while语句计算1加到100的值  */

void main(){
    int i = 1, sum = 0;
    while(i <= 100){
        sum += i;
        i++;
    }
    printf("%d\n", sum);
}
