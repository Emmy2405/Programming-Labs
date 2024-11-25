/*
Program Description:

Author: Eman Abdelatti

Date: 06/02/2024

*/

#include <stdio.h>

int finding_average(int);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int sum = 0;
    int average = 0;


    printf("\nPlease enter your 3 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    average = finding_average(sum);

    printf("\nThe average of all 3 numbers is %d", average);

    return 0;
}

int finding_average(int sum)
{
    int average = 0;


    average = sum / 3;

    return average;

}