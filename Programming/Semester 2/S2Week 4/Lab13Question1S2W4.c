/*

Program Description:Write a program that uses two functions (1 function to calculate
                    the area of a Square, another function to calculate the area of a Circle). Declare a
                    variable in your main for the length of a side of the Square and another variable for
                    the radius of the Circle. Ask the user to enter these values. Using Pass by Reference,
                    pass these as parameters to the separate functions, calculate the areas of the Square
                    and Circle in their separate functions, and display the calculated areas for the Square
                    and Circle back in your main(). Remember, you must use Pass by Reference. Do not
                    forget to declare the signatures for both functions.

Author: Eman Abdelatti

Date: 13/02/2024

*/

#include <stdio.h>

int areaS(int *);//function signature

int areaC(int *);//function signature

int main()//beginning of main()
{
    //declaring variables
    int length = 0;
    int radius = 0;
    int squareArea = 0;
    int circleArea = 0;


    printf("\nPlease enter the length of a side of a square:\n");
    scanf("%d", &length);//scanf to enter in the length of a square

    //calculating the area of a square
    squareArea = areaS(&length);

    printf("\n\nThe area of the square is:%d", squareArea);

    printf("\n\nPlease enter the radius of the circle:");
    scanf("%d", &radius);//scanf to enter in the radius of a circle

    //calculating the area of a circle
    circleArea = areaC(&radius);

    printf("\n\nThe area of the cirlce is:%d", circleArea);

    return 0;
}

int areaS(int *length)//beginning of areaS()
{
    //declaring variables
    int area = 0;

    //calculating area
    area = *length * *length ;

    return area;
}//end of areaS()

int areaC(int *radius)//beginning of areaC()
{
    //declaring variables
    int area = 0;


    //calculating area
    area = 3.14 * *radius * *radius;

    return area;
}//end of areaC()