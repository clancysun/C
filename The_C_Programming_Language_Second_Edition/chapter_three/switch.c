#include <stdio.h>

/*  输入一个整数，输出该整数对应的星期几的英文表示  */

void main() {
    int a;

    printf("Input integer number: ");
    scanf("%d", &a);

    switch(a){
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("error\n"); break;
    }
}
