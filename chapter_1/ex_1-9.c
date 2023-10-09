// program copy input to output, replace each string one or more blanks by a
// single blank

#include <stdio.h>
main()
{
    int character;
    int blanks = 0;

    while ((character = getchar()) != EOF)
    {
        if (character == ' ') {
            ++blanks;
        }

        if (character != ' ') {
            blanks = 0; 
        }

        if (blanks > 1) {
            // do nothing            
        }
        else {
            putchar(character);
        }
    }
}
