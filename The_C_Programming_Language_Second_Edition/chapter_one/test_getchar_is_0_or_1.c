#include <stdio.h>

/*  验证表达式getchar() != EOF的值0还是1  */
void main() {
    int c;

    while (c = (getchar() != EOF))
        printf("%d\n", c);
    printf("%d - at EOF\n", c);
}

/*
 * 当有字符可读时，getchar()不会返回文件结束符（即EOF），所以
 * getchar() != EOF
 * 的取值为真，变量 c 将被赋值为1。
 * 当程序遇到文件结束符时，表达式取值为假，
 * 此时，变量 c 将被赋值为0，程序将结束运行。
 */
