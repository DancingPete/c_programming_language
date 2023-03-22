/* Pierre Cassidy
 * September 6, 2021
 * Exercise to experiment with relational and logical operators in C. */

#include <stdio.h>


int main()
{
    // The relational operators are <, >, <=. >=
    printf("4 > 2 is %i\n", 4 > 2);
    printf("4 < 2 is %i\n", 4 < 2);
    printf("4 >= 4 is %i\n", 4 >= 2);
    printf("4 >= 2 is %i\n", 4 <= 2);
    // The equality operators are !=, ==
    printf("4 == 2 is %i\n", 4 == 2);
    printf("4 != 2 is %i\n", 4 != 2);
    // The logical operators are &&, ||
    printf("1 && 0 is %i\n", 1 && 0);
    printf("1 || 0 is %i\n", 1 || 0);
    printf("1 && 1 is %i\n", 1 && 1);
    printf("1 || 1 is %i\n", 1 || 1);

    return(0);
}
