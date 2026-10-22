#include <stdio.h>

int main(void)
{

    int x, y, i, j;

    x = 10, y = 20; // First assign 10 to x, then 20 to y

    x = (1, 2, 3);
    printf("x is %d\n", x); // Prints  3, because 3 is righmost in the comma list

    for (i = 0, j = 10; i < 100; i++, j++)
        printf("%d, %d\n", i, j);
}
