#include <stdio.h>

/*  用递归计算 n!  */

long factorial(int n){
    long result;

    if(n == 0 || n == 1){
        result = 1;
    }else{
        result = factorial(n - 1) * n;              // 递归调用
    }
    return result;
}

void main(){
    printf("10! = %ld\n", factorial(10));
}
