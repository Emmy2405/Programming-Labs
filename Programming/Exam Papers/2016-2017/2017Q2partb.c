/*
Program Description: entering a temperature in celsius and converting it to fahrenheit in a seperate function

Author: Eman Abdelatti

Date: 28/04/2024

*/

#include <stdio.h>

int change(float);

int main()
{
    float celsius = 0;
    float fahrenheit = 0;

    printf("\nPlease enter the temperature in degrees celsius:\n");
    scanf("%f", &celsius);

    printf("\nThe temperature that you have entered is %.2f degrees celsius.", celsius);

    fahrenheit = change(celsius);

    printf("\nTemperature in celsius: %.2f | in Fahrenheit: %.2f", celsius, fahrenheit);
    return 0;
}

int change(float C)
{
    float fahrenheit = 0;

    fahrenheit = (C * 1.8) + 32;

    return fahrenheit;
}