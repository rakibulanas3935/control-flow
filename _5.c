// Write a program in C to display the multiplication table of a given integer

#include <stdio.h>
void main()
{
    int i = 1, n, mul = 1;
    scanf("%d", &n);
    for (i; i <= 10; i++)
    {
        printf("%d X %d= %d\n", n, i, (n * i));
    }
}