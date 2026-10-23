// Do something if x less than 10 and y greater than 20:

#include <stdio.h>

int main(void)
{
    int x, y;

    x = 6;
    y = 25;

    if (x < 10 && y > 20)
        printf("Doing something!\n");

    if (!(x < 12))
        printf("x is not less than 12\n");

    if (x >= 12)
        printf("x is not less than 12\n");
}
