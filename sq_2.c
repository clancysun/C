#include <stdio.h>

/*  用宏计算平方值  */

#define SQ(y) ((y) * (y))

void main(){
    int i = 1;
    while(i <= 5){
        printf("%d ^ 2 = %d\n", i, SQ(i++));
    }
}
