#include <stdio.h>

int main(void)
{
    int i = 10;

    if (i > 10)
    {

        printf("Yes, i is greater than 10.\n");
        printf("And this will also print if i is greater than 10.\n");
    }

    if (i <= 10)
        printf("i is less than or equal to 10.\n");

    int j = 99;

    if (j == 10)
        printf("j is 10.\n");
    else
    {
        printf("j is decidedly not 10.\n");
        printf("Which irritates me a little, frankly.\n");
    }

    int k = 99;

    if (k == 10)
        printf("k is 10!\n");

    else if (k == 20)
        printf("k is 20!\n");

    else if (k == 99)
    {
        printf("k is 99! My favorite\n");
        printf("I can't tell you how happy I am.\n");
        printf("Really.\n");
    }

    else
        printf("k is some crazy number I've never heard of.\n");
}
