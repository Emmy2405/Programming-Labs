/*

Program Description: Using structures find the difference of 3 complex numbers 
                     and make the program take into account the real and imaginary part
                     
Author: Eman Abdelatti

Date: 03/03/2024

*/

#include <stdio.h>

//structure for the complex number
typedef struct Complex
{
    //declaring variables
    double real;
    double imagine;

} complex;

int main()
{
    //declaring variables
    complex c1 = {.real = 22.31, .imagine = 73.87};
    complex c2 = {.real = 11.23, .imagine = 22.45};
    complex c3 = {.real = 2.01, .imagine = 12.23};
    complex difference;

    //finding the difference for the 3 numbers
    difference.real = c1.real - c2.real - c3.real;//finding the difference for the 3  real numbers
    difference.imagine = c1.imagine - c2.imagine - c3.imagine; //finding the difference for the 3 imaginary numbers

    //printing off the result
    printf("\n\nThe difference between the 3 complex numbers is\n%.2lf + %.2lfi", difference.real, difference.imagine);

    return 0;
}