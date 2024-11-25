/*

Program Description:

Author: Eman Abdelatti

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;

    //Enter four numbers 
    printf("\nEnter four numbers");
    scanf("%d%d%d%d", &num1 , &num2 , &num3 , &num4);

    //Here the numbers will be displayed in the reverse order in which they were placed
    printf("\nYou entered %d, %d, %d, %d", num4 , num3 , num2 , num1);

    return 0;
}