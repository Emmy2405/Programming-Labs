/*
Program Description: This program is  to illustrate errors in a C program

Author: Eman Abdelatti

Date: 26/09/2023

*/

#include <stdio.h>

int main()
{
    
    int num1;
    int num2;
    float num3;


    num1= 400;
    num2= 600;
    num3= num2;

    printf("\nnum1 contains %d,\nnum2 contains %d", num1, num2);
    printf("\nnum2 contains %d,\nnum3 contains %f", num2, num3);

    return 0;
}