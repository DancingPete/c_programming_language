/* Pierre Cassidy
 * September 4, 2021
 * Small exercise to experiment with C declarations. */

#include <stdio.h>

int main() {
    /* Variables are declared before use.
     * They are declared by specifying a type and a list of one or more variable names of that type. */
    int a, b, c;
    float first, second, third;
    char one, two, three;

    // Variables of the same type may be declared separately.
    int d;
    int e;
    int f;
    float fourth;
    float fifth;
    float sixth;
    char four;
    char five;
    char six;

    // Variables may be initialized upon declaration.
    int g = 1;
    float seventh = 12;
    char seven = 'x';
    char eight[] = "Factory";

    // Print initialized values.
    printf("g:\t%12i\nseventh:\t%12f\nseven:\t%12c\neight: \t%12s\n", g, seventh, seven, eight);

    return(0);
}
