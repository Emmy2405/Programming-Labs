#include <stdio.h>

int main()
{
    int sum = 0;
    int i;

    for(i = 0 ; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("The sum of 1 - 10 is:%d", sum );

    return 0;
}