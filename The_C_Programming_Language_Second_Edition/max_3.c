#include <stdio.h>

/*  定义一个函数求两个数中的最大值  */

int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

void main(){
    int num1, num2, maxVal;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);
    maxVal = max(num1, num2);
    printf("The max number: %d\n", maxVal);
}
