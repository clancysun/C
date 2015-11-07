#include <stdio.h>

/*  输出字符数组中的元素  */

void main(){
    int i, j;
    char a[][7] = {
        {'C', ' ', 'L', 'a', 'n', 'g'},
        {'P', 'r', 'o', 'g', 'r', 'a', 'm'},
        {'F', 'u', 'n', 'n', 'y'}
    };
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 6; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}
