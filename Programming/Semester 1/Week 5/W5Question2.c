/*

Program Description:

Author: Eman Abdelatti

Date: 17/10/2023

*/

#include <stdio.h>

int main()

{
    int num = 0;
    

    printf("\nPlease enter a number between 1 and 100");
    scanf("%d", &num);

    if (num % 2 == 0)// if the number is even
    {
        printf("\nThis number is even");
    }

    else //if the number is odd
    {
        printf("\nThis number is odd");
    }

    return 0;
}