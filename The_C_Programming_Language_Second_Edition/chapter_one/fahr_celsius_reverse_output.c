#include <stdio.h>

#define     LOWER   0       /*  表的下限  */
#define     UPPER   300     /*  表的上限  */
#define     STEP    20      /*  表的步长  */
/*  打印华氏温度-摄氏温度对照表  */
void main() {
    int fahr;

    printf("华氏温度与摄氏温度对照表(逆序输出)\n");
    printf("Fahr\tCelsius\n");

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
