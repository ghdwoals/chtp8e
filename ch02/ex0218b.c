// Program tested using variety of inputs.
// Break it? Permission dutifully granted.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PROGRAM_NAME "ex0218"

void usage(void);
int validate(char *string);
int main(int argc, char *argv[]) {
    int i;
    int j;
    int numbers[2];

    if (argc != 3)
        usage();

    // Never assume user will enter two integers.
    // Validated against numerous tests.
    for (i = 0, j = 1; j < argc; j++, i++)
        if (validate(argv[j]))
            numbers[i] = atoi(argv[j]);

    if (numbers[0] > numbers[1])
        printf("%d is larger.\n", numbers[0]);
    else if (numbers[1] > numbers[0])
        printf("%d is larger.\n", numbers[1]);
    else
        printf("These numbers are equal.\n");

    return 0;
}

void usage(void) {
    printf("%s requires two integers.\n", PROGRAM_NAME);
    exit(EXIT_FAILURE);
}

// Do not necessarily have to validate via return value.
int validate(char *string) {
    int length = strlen(string);
    int i;

    for (i = 0; i < length; i++)
        if (!isdigit(string[i]))
            usage();

    return 1;
}
