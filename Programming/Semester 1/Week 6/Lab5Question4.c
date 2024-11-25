/*

Program Description:

Author: Eman Abdelatti

Date: 25/10/2023

*/

#include <stdio.h>

int main()
{
    int counter = 1;

    
    do//cycle between 1 - 10
    {
        printf("\ncounter is %d" , counter);

        if(counter == 3)//start if statement for number 3
        {
            printf("\nThis number is three");
        }// end if statement for number 3

        if(counter == 7)//start if statement for number 3
        {
            printf("\nThis number is seven");
        }//end if statement for number 3

        //increment counter
        counter++;

    }//end d
    while (counter < 11);

    return 0;

}