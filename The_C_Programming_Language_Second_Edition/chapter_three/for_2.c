#include <stdio.h>

/*  for循环嵌套使用  */

void main(){
    int i, j, k;
    printf("i j k\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            for(k = 0; k < 3; k++)
                printf("%d %d %d\n", i, j, k);
}
