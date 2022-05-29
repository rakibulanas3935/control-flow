// Write a program in C to read 10 numbers from keyboard and find their sum and average

#include <stdio.h>
void main()
{
    int i, value, sum = 0;
    float avarage = 1;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &value);
        sum += value;
    }
    avarage = sum / 10.0;
    printf("%d\n", sum);
    printf("%.2f", avarage);
}