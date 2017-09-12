#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PI              3.14159
#define PROGRAM_NAME    "ex0220"

void usage(void);
int validate(char *string);
int main(int argc, char *argv[]) {
    double radius;    
    int i, j;

    if (argc != 2)
        usage();

    // Validating yet again.
    if (validate(argv[1]))
        radius = atof(argv[1]);

    // Calculated to five decimal places.
    printf("Diameter:\t%2.5f\n", 2 * radius);
    printf("Circumference:\t%2.5f\n", 2 * PI * radius);
    printf("Area:\t\t%2.5f\n", PI * (radius * radius));
        // Forgo liibrary math func pow() here.
    
    exit(EXIT_SUCCESS);
}

void usage(void) {
    printf("%s takes one number. It is picky. Goodbye.\n", PROGRAM_NAME);
    exit(EXIT_FAILURE);
}

int validate(char *string) {
    int length = strlen(string);
    int i;
    int count = 0;

    for (i = 0; i < length; i++)
        if (!isdigit(string[i]))
            if (string[i] == '.' && count == 0) {
                count++;
                continue;
            }
            else
                usage();

    return 1;
}            
