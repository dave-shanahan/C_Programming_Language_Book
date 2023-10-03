#include <stdio.h>

main()
{
    int c;

    c = getchar() != EOF;

    printf("Value of C: %d\n", c);
    printf("Value of EOF: %d\n", EOF);
}
