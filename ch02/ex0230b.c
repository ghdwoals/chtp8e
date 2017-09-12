#include <stdio.h>
#include <stdlib.h>

#define PROGRAM_NAME "ex0230"

void usage(void);
void rem(int num);

int main(int argc, char *argv[]) {
    int x;

    if (argc != 2)
        usage();
    else
        x = atoi(argv[1]);

    if (x / 10 > 0)
        rem(x);

    printf("\n");

    return 0;
}

void usage() {
    printf("%s requires an int arg. Terminating...\n", PROGRAM_NAME);
    exit(EXIT_FAILURE);
}

void rem(int num) {
    int mod = num % 10;

    if (num / 10 > 0)
        rem(num / 10);

    printf("%d   ", mod);
}
