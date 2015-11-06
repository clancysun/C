#include <stdio.h>

/*  统计从键盘输入的一行字符的个数  */

void main(){
    int n = 0;

    printf("Input a string: ");

    while(getchar() != '\n') n++;

    printf("Number of characters: %d\n", n);
}
