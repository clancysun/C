#include <stdio.h>

/*  使用scanf从控制台输入一个字符串，然后使用printf将其输出  */

void main(){
    char str[100];                  // 必须说明长度，不能写为char str[];
    printf("Input string: ");
    scanf("%s", str);
    printf("Your string is: %s\n", str);
}
