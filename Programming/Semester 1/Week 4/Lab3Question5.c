/*
Program Description: Heartbeat

Author: Eman Abdelatti

Date: 13/10/2023

*/

#include <stdio.h>

int main()
{
    int age;
    int sum;


    printf("\nPlease Enter Your Age:");
    scanf("%d", &age);

    sum = age * 39420000;
    printf("\nYour heart has beat %d times so far in your life", sum);

    return 0;
    
}  