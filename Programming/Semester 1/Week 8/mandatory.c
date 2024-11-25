/*

Program Description: This program is to enter 5 numbers into an array and place them in the second array in reverse order

Author: Eman Abdelatti

Date: 07/11/2023

*/

#include <stdio.h>

#define SET 5


int main()
{
    int num1[SET];
    int num2[SET];
    int i;


    //The user enters five integers in the program
    printf("\nEnter any 5 integer numbers:\n",SET);
    

    for (i = 0; i < SET; i++)//beginning of for loop
    {
        //This for loop is so the user can enter a number into each element of the first array
        scanf("%d", &num1[i]);
    }//end of for loop


    //Here we are entering the values from the first array into the second array
    for (i = 0; i < SET; i++)//beginning of for loop
    {
        num2[(SET - 1) - i] = num1[i];
    }//end of for loop


   //Here we are printing the values from the second array
    for (i = 0; i < SET; i++)//beginning of for loop
    {
        printf("\n%d ", num2[i]);
    }//end of for loop

    return 0;

}//end main