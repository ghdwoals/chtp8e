// Program tested using variety of inputs.
// Break it? Permission granted.
#include <stdio.h>
#include <stdlib.h>

#define PROGRAM_NAME "ex0218"

void usage(void);
int main(int argc, char *argv[]) {
    int i;

    if (argc != 3)
        usage();

    // Assume user will enter two integers.
    // Unexpected behavior expected otherwise.
    for (i = 1; i < argc; i++)
        if ((*argv[i] = atoi(argv[i])) == 1)
            continue;
        else
            usage();

    if (*argv[1] > *argv[2])
        printf("%d is larger.\n", *argv[1]);
    else if (*argv[2] > *argv[1])
        printf("%d is larger.\n", *argv[2]);
    else
        printf("These numbers are equal.\n");

    return 0;
}

void usage(void) {
    printf("%s requires two integers.\n", PROGRAM_NAME);
    exit(EXIT_FAILURE);
}
