#include <stdio.h>

void main(){
    char c;
    while(c != '\n'){         // 回车符结束循环
        c = getchar();
        if(c == 0x34)       // 按下的是数字键4
            continue;       // 不执行printf语句便进行下次循环
        printf("%c", c);
    }
    printf("\n");
}
