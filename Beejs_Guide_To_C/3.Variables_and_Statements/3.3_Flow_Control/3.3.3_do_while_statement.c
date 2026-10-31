#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 10;

    while (i < 10)
    {
        printf("while: i is %d\n", i);
        i++;
    }

    i = 10;

    do
    {
        printf("do-while: i is %d\n", i);
        i++;
    } while (i < 10);

    printf("All done!\n");

    int r;

    do
    {
        r = rand() % 100;
        printf("%d\n", r);
    } while (r != 37);
}