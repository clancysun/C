#include <stdio.h>

/*  定义一个函数，计算1加到100的结果  */

int sum(){
    int i, sum = 0;
    for(i = 1; i <= 100; i++){
        sum += i;
    }
    return sum;
}

void main(){
    int a = sum();
    printf("The sum is %d\n", a);
}
