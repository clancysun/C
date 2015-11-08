#include <stdio.h>

/*  计算 1+2+3+...+(n-1)+n 的值  */

int sum(int n){
    int i;
    for(i = n - 1; i >= 1; i--){
        n += i;
    }
    printf("The inner n = %d\n", n);

    return n;
}

void main(){
    int n, total;
    printf("Input a number: ");
    scanf("%d", &n);
    total = sum(n);
    printf("The outer n = %d\n", n);
    printf("1 + 2 + 3 + ... + (n - 1) + n = %d\n", total);
}
