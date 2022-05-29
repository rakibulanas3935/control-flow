// The pattern like :

// 1
// 12
// 123
// 1234

#include <stdio.h>
void main()
{
    int i = 1, j = 1;
    for (i; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%d", j);
        }

        printf("/n");
    }
}