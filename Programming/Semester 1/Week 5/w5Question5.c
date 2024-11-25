/*

Program Description: This is to figure out if we have a valid triangle

Author: Eman Abdelatti

Date: 17/10/2023

*/

#include <stdio.h>

int main()
{
    float side1 ;
    float side2 ;
    float side3 ;
    float sum = 0;


    printf("\nPlease enter the length of the first side:");
    scanf("%f" , &side1);

    printf("\nPlease enter the length of the second side:");
    scanf("%f" , &side2);

    printf("\nPlease enter the length of the third side:");
    scanf("%f" , &side3);

    sum = side1 + side2;
    printf("\nCombined length of first and second side:", sum);

if (sum > side3)// if side 1 and side 2 combined are greater that side 3 in length
{
    printf("\nThis is a valid triangle");
}

else//if the sum is not greater than side 3
{
    printf("\nThis is not a valid triangle");
}

return 0;

}