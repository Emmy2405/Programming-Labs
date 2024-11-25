/*

Program Description:

Author: Eman Abdelatti

Date:13/10/2023

*/

#include <stdio.h>

int main()
{
    float fahrenheit;
    float celsius;


    printf("Enter a temperature in degrees Fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    printf("Temperature in celsius is:%f", celsius);

    return 0;

}