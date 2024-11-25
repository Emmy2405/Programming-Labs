/*

Program Description:This is a program to input three floating-point numbers from the keyboard and
                    to find their sum and average while displaying the result to 3 decimal place

Author:Eman Abdelatti

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    float var1 = 0;
    float var2 = 0;
    float var3 = 0;
    float sum = 0;
    float average = 0;


    //Write  the first float number
    printf("\nEnter first number");
    scanf("%f",&var1);

    //Write the second float number
    printf("\nEnter second number");
    scanf("%f", &var2);

    //Write the third float number
    printf("\nEnter third number");
    scanf("%f", &var3);

    //Get the sum of the numbers entered
    sum = var1 + var2 + var3;
    printf("\nsum of var1 and var2 and var3 is %.3f", sum);

    //Get the average of the numbers entered
    average = sum / 3;
    printf("\naverage of sum / 3 is %.3f" , average);

    return 0;
}