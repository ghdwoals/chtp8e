#include <stdio.h>
int main(void) {
    printf("1 2 3 4\n");                        // (a)
    printf("%d %d %d %d\n", 1, 2, 3, 4);        // (b)
    printf("1 ");                               // (c)
    printf("2 ");
    printf("3");
    printf(" 4\n");
    return 0;
}
