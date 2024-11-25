/*

Program Description: This is to display a single numeral in writing

Author: Eman Abdelatti

Date: 18/10/2023

*/

#include <stdio.h>

int main()
{
    int num ;


    printf("\nPlease enter a single numeral:");
    scanf("%d" , &num);

    switch (num)
    {
        case 1 ://if number is 1
        {
            printf("\none");
            break;
        }//end of case 1

        case 2: //case 2
        {
            printf("\ntwo");
            break;
        }//end of case 2
    

        case 3 ://case 3
        {
            printf("\nthree");
            break;
        }//end of case 3

        case 4 ://case 4
        {
            printf("\nfour");
            break;
        }//end of case 4

        case 5:// case 5
        {
            printf("\nfive");
            break;
        }// end of case 5

        case 6 ://case 6
        {
            printf("\nsix");
            break;
        }//end of case 6

        case 7 ://case 7
        {
            printf("\nseven");
            break;
        }//end of case 7

        case 8 ://case 8
        {
            printf("\neight");
            break;
        }//end of case 8

        case 9 ://case 9
        {
            printf("\nnine");
            break;//end of case 9
        }

        default://if any other numeral is placed
        {
            printf("\nThis is not a single numeral");
            break;
        }//end of default
    }//end of switch

    return 0;

}