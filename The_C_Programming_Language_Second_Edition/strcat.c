#include <stdio.h>
#include <string.h>

/*  字符串连接函数 strcat  */

void main(){
    char str1[40] = "My name is ";
    char str2[20];
    printf("Input your name: ");
    gets(str2);
    strcat(str1, str2);
    puts(str1);
}
