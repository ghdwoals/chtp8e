#include <stdio.h>

int main(void) {
    int x, y;

    // Assume user is entering two separate integers.
    // Else unexpected behavior.
    printf("Enter two integers.\n");
    printf("First number:\t");
    scanf("%d", &x);
    printf("Second number:\t");
    scanf("%d", &y);

    if (x > y)
        printf("%d is larger.\n", x);
    else if (y > x)
        printf("%d is larger.\n", y);
    else
        printf("These numbers are equal.\n");

    return 0;
}
