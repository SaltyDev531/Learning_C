#include <stdio.h>

int main(void)
{
    int i, j;

    i++; // Add one to i (post-increment)
    i--; // Subtract one from i (post-decrement)

    ++i; // Add one to i (pre-increment)
    --i; // Subtract one from i (pre-decrement)

    i = 10;
    j = 5 + i++; // Compute 5 + i, _then_ increment

    printf("%d, %d\n", i, j); // Prints 11, 15

    i = 10;
    j = 5 + ++i; // Increment i, _then_  compute 5 + i

    printf("%d, %d\n", i, j);
}