#include <stdio.h>

#define R 1

void main(){
    float len, area_round, area_square;
    printf("Input a number: ");
    scanf("%f", &len);
#if R
    area_round = 3.14159 * len * len;
    printf("Area of round is: %f\n", area_round);
#else
    area_square = len * len;
    printf("Area of square is: %f\n", area_square);
#endif
}
