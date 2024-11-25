/*
Program Description:

Author: Eman Abdelatti

Date: 05/12/2023

*/

#include <stdio.h>

int main()
{
    float input1;
    float input2;
    float *ptr1;
    float *ptr2;

    printf("\nPlease enter a  decimal point number for input1:\n");
    scanf("%f", &input1);

    printf("\nPlease enter a decimal point number for input2:\n");
    scanf("%f", &input2);

    printf("\nThe address of input1 is: %p", &input1);
    printf("\nThe address of input1 is: %p", &input2);

    printf("\nThe content of ptr1 is %p", ptr1);
    printf("\nThe content of ptr2 is %p", ptr2);

    ptr1 = &input1;
    ptr2 = &input2;

    printf("\ninput1 contains %.2f and is stored at memory address %p\n", input1 , &input1);
    printf("\ninput2 contains %.2f and is stored at memory address %p\n", input2 , &input2);

    printf("\nThe content of the address of ptr1 is %.2f", *ptr1);
    printf("\nThe content of the address of ptr2 is %.2f", *ptr2);

    return 0;
    
}