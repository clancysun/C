#include <stdio.h>

/*  用函数计算平方值  */

int SQ(int y){
    return ((y) * (y));
}

void main(){
    int i = 1;
    while(i <= 5){
        printf("%d ^ 2 = %d\n", (i - 1), SQ(i++));
    }
}
