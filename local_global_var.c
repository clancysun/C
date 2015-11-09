#include <stdio.h>

/*  全局变量和局部变量同名  */

int a = 3, b = 5;                   // a, b为全局变量

int max(int a, int b){              // a, b为局部变量
    int c;
    c = a > b ? a : b;
    return c;
}

void main(){
    int a = 8;
    printf("%d\n", max(a, b));
}
