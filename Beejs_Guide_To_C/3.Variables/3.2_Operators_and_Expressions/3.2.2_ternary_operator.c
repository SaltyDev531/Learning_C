#include <stdio.h>

int main(void)
{
    int y, x;

    x = 5;

    // If x > 10, add 17 to y. Otherwise add 37 to y.

    y += x > 10 ? 17 : 37;

    // is equivalent to this non-expression:

    if (x > 10)
        y += 17;
    else
        y += 37;

    // prints if a number stored in x is odd or even:

    printf("The number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");
    printf("The number %d is %s.\n", y, y % 2 == 0 ? "even" : "odd");
}