/*

Program Description:This is about entering a number between 1 to 7 and 
                    the oper. displaying a weekday based on that number

Author: Eman Abdelatti

Date: 18/10/2023

*/

#include <stdio.h>

int main()
{
    int num ;


    printf("\nPlease enter a number between 1 to 7:");
    scanf("%d" , &num);

    switch (num)
    {
        case 1 ://if number is 1
        {
            printf("\nMonday");
            break;
        }//end of case 1

        case 2: //case 2
        {
            printf("\nTuesday");
            break;
        }//end of case 2
    

        case 3 ://case 3
        {
            printf("\nWednesday");
            break;
        }//end of case 3

        case 4 ://case 4
        {
            printf("\nThursday");
            break;
        }//end of case 4

        case 5:// case 5
        {
            printf("\nFriday");
            break;
        }// end of case 5

        case 6 ://case 6
        {
            printf("\nSaturday");
            break;
        }//end of case 6

        case 7 ://case 7
        {
            printf("\nSunday");
            break;
        }//end of case 7

        default://if any other numeral is placed
        {
            printf("\nError!!!");
            break;
        }//end of default
    }//end of switch

    return 0;

}
