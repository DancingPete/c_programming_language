/* Pierre Cassidy
 * September 3, 2021
 * Execise 2.1 in The C Programming language */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("The ranges of signed char on this system are: %i to %i.\n", CHAR_MIN, CHAR_MAX);
    printf("The ranges of signed short on this system are: %i to %i.\n", SHRT_MIN, SHRT_MAX);
    printf("The ranges of signed int on this system are: %i to %i.\n", INT_MIN, INT_MAX);
    printf("The ranges of signed long on this system are: %li to %li.\n", LONG_MIN, LONG_MAX);
    printf("The ranges of signed double on this system are: %e to %e.\n", DBL_MIN, DBL_MAX);
    printf("The ranges of unsigned char on this system are: %i to %i.\n", 0, UCHAR_MAX);
    printf("The ranges of unsigned short on this system are: %i to %i.\n", 0, USHRT_MAX);
    printf("The ranges of unsigned int on this system are: %i to %i.\n", 0, UINT_MAX);
    printf("The ranges of unsigned long on this system are: %i to %ld.\n", 0, ULONG_MAX);
}
