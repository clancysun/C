#include <stdio.h>

/*  输入正方体的长宽高l、w、h。求体积及三个面x*y、x*z、y*z的面积。  */

int s1, s2, s3;                 // 面积
int vs(int a, int b, int c){
    int v;                      // 体积
    v = a * b * c;
    s1 = a * b;
    s2 = b * c;
    s3 = c * a;
    return v;
}

void main(){
    int v, l, w, h;
    printf("Input length, width and height: ");
    scanf("%d %d %d", &l, &w, &h);
    v = vs(l, w, h);
    printf("v = %d, s1 = %d, s2 = %d, s3 = %d", v, s1, s2, s3);
}
