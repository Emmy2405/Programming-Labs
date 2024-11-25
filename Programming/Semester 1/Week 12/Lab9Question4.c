/*

Program Description:

Author:

Date:

*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum;
    int *ptr1;
    int *ptr2;
    int *ptr3;

    printf("\nPlease enter a number for num1:\n");
    scanf("%d", &num1);

    printf("\nPlease enter a number for num2:\n");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    *ptr3 = *ptr2 + *ptr1;

    printf("The sum of num1 and num2 is %d", *ptr3);

    return 0;
}