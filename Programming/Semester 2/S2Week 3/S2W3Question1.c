/*
Program Description:Write a program that uses a function to check if a
                    number is even or odd. Your main() should allow the user to enter any number and
                    this should be passed to your function. Your function should check if the number is
                    even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
                    result.

Author: Eman Abdelatti

Date: 06/02/2024

*/

#include <stdio.h>

int indication(int);

int main()
{
    int num = 0;
    int value = 0;
    

    printf("Please enter a number:\n");
    scanf("%d", &num);

    value = indication(num);

    if(indication(num))
    {
        printf("\nThe number is even");
    }
    else
    {
        printf("\nThe number is odd");
    }

    return 0;

}

int indication(int var)
{
    if(var % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}