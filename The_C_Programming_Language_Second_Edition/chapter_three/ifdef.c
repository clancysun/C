#include <stdio.h>

/*  条件编译  */

#define WIN16 true

void main(void){
#ifdef WIN16
    printf("The value of sizeof(int) is 2.\n");
#else
    printf("The value of sizeof(int) is 4.\n");
#endif
}
