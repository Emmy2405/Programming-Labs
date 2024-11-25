/*
Program Description: Printing out 10 stars

Author: Eman Abdelatti

Date: 30/01/2024

*/

#include <stdio.h>

void stars(void);

int main()//beginning of main() function
{

    printf("\nBefore function call\n\n");

    stars();//calling on stars() function

    printf("\nBefore function call\n\n");

    return 0;
}//end of main() function

void stars(void)//beginning of stars() function
{
    printf("**********\n");

}//end of stars() function