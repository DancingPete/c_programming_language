/* Pierre Cassidy
 * September 6, 2021
 * Exercise to experiment with arithmetic operators in C. */

#include <stdio.h>

int x, y, z;

int main()
{
    // Arithmetic operators are +. -. *. /, and %
    // The modulo operator, %, is only applicable to integer values.
    printf("1 + 2 = %i\n"
            "1 - 2 = %i\n"
            "1 * 2 = %i\n"
            "1 / 2 = %i\n"
            "1 %% 2 = %i\n", 
            1 + 2, 1 - 2, 1 * 2, 1 / 2, 1 % 2);
    
    return(0);
}
