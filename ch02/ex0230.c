#include <stdio.h>

void rem(int num);

int main(void) {
    int x;

    while ((scanf("%d", &x)) == 1) {
        if (x / 10 > 0)
            rem(x);
        printf("\nEnter another number: ");
    }

    printf("\n");

    return 0;
}

void rem(int num) {
    int mod = num % 10;

    if (num / 10 > 0)
        rem(num / 10);

    printf("%d   ", mod);
}
