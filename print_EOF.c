#include <stdio.h>

void main() {
    printf("随便按个键，Ctrl+D或Ctrl+Z代表EOF\n");
    printf("表达式getchar() != EOF 的值为 %d\n", getchar() != EOF);
}
