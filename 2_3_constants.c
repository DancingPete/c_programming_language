/* Pierre Cassidy
 * September 4, 2021
 * Small exercise to esperiment with constants in C. */

#include <stdio.h>
#include <string.h>

int main()
{
    // Integer constants
    printf("Integers may be treated directedly as constants: %i.\n", 3335);

    // Floating point constants
    printf("Floating point number may be treated as constants: %.2f.\n", 33.52342);

    // Character constants
    printf("Character constants are integers defined as single characters in a single quotation mark: "
           "The 'x' character has the integer value %i and the character value %c.\n", 'x', 'x');

    // String constants
    printf("This is a very, very, very long string, "
           "broken across two lines of code.\n");
    
    // Get length of string, given string is an array of characters
    int length;
    length = strlen("This.");
    printf("The length of the string is: %d.\n", length);

    // Enum constants
    printf("Enums are lists of constant integer values which are provided reference names.\n");
    enum boolean { FALSE, TRUE };
    printf("The boolean enum defined in the program has FALSE and TRUE defined, with default integer values of "
           "%i and %i, respectively.\n", FALSE, TRUE);

    return(0);
}
