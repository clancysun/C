#include <stdio.h>

#define     LOWER   0       /*  表的下限  */
#define     UPPER   300     /*  表的下限  */
#define     STEP    20      /*  表的下限  */
/*  打印华氏温度-摄氏温度对照表  */
void main(){
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
