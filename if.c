#include <stdio.h>

/*  if语句的嵌套  */

void main() {
    int a, b;

    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    if(a != b) {
        if(a > b) printf("%d > %d\n", a, b);
        else printf("%d < %d\n", a, b);
    }
    else
        printf("%d = %d\n", a, b);
}
