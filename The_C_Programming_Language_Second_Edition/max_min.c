#include <stdio.h>

/*  求一个整型数组中的最大值和最小值  */

void main(){
    int a[10] = {2, 123, 45, 100, 575, 240, 799, 710, 10, 90};
    int max = a[0], min = a[0];                             // 最大值和最小值
    int i;                                                  // 循环增量
    int len = sizeof(a) / sizeof(int);                      // 计算数组长度
    for(i = 1; i < len; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf("The max is %d, The min is %d\n", max, min);
}
