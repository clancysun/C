#include <stdio.h>

/*  输入正方体的长宽高l、w、h。求体积及三个面x*y、x*z、y*z的面积。 */

#define SSSV(s1, s2, s3, v) s1 = l * w; s2 = l * h; s3 = w * h; v = w * l * h;

void main(){
    int l = 3, w = 4, h = 5, sa, sb, sc, vv;
    SSSV(sa, sb, sc, vv);
    printf("sa = %d\nsb = %d\nsc = %d\nvv = %d\n", sa, sb, sc, vv);
}
