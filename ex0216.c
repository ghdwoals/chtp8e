#include <stdio.h>
int main(void) {
    // Assume both numbers are integers.
    // Cannot mod floats.
    // Also assume user nice enough to type two ints.
    int x, y;

    printf("Enter two integers.\n");
    printf("First:\t");
    scanf("%d", &x);
    printf("Second:\t");
    scanf("%i", &y);

    printf("Sum:\t\t%d\n", x + y);
    printf("Product:\t%d\n", x * y);
    printf("Difference:\t%d\n", x - y);
    printf("Quotient:\t%d\n", x / y);
    printf("Remainder:\t%d\n", x % y);

    return 0;
}
