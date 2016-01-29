#include <stdio.h>

/*  计算sum = 1! + 2! + 3! + ... + (n-1)! + n!  */

long factorial(int n);
long sum(long n);

void main(){
    printf("1! + 2! + 3! + ... + 9! + 10! = %ld\n", sum(10));
}

// 求阶乘
long factorial(int n){
    int i;
    long result = 1;
    for(i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

// 求累加的和
long sum(long n){
    int i;
    long result = 0;
    for(i = 1; i <= n; i++){
        // 嵌套调用
        result += factorial(i);
    }
    return result;
}
