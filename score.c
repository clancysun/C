#include <stdio.h>

/*  求全组分科的平均成绩和各科总平均成绩  */

void main(){
    int i, j;                       // 二维数组下标
    int sum = 0;                    // 当前科目的总成绩
    int average;                    // 总平均分
    int v[3];                       // 各科平均分
    int a[5][3];                    // 用来保存每个同学各科成绩的二维数组
    printf("Input score: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &a[j][i]);  // 输入每个同学的各科成绩
            sum += a[j][i];         // 计算当前科目的总成绩
        }
        v[i] = sum / 5;             // 当前科目的平均分
        sum = 0;
    }
    average = (v[0] + v[1] + v[2]) / 3;
    printf("Math: %d\nC Language: %d\nEnglish: %d\n", v[0], v[1], v[2]);
    printf("Total average: %d\n", average);
}
