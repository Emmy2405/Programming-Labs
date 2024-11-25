/*

Program Description: To see if num1 is evenly divisible by num2

Author: Eman Abdelatti

Date: 17/10/2023

*/

#include <stdio.h>

int main()

{
    int num1 = 0;
    int num2 = 0;

    printf("\nPlease enter first integer number");
    scanf("%d", &num1);

    printf("\nPlease enter second integer number");
    scanf("%d", &num2);

    if (num1 % num2 == 0)//If num1 is evenly divisible by num2
    {
        printf("\nfirst number is evenly divisible by second number");
    }
    else//if number isn't evenly divisible
    {
        printf("\nfirst number isn't evenly divisible by second number ");
    }

    return 0;

}