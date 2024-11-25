/*

Program Description: This is a program where if you put in an even number it halves it 
                    and if you put in an odd number it multiplies by 3 and adds 1

Author: Eman Abdelatti

Date: 24/10/2023

*/

#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    

    while (num < 1)//start of while loop
    {
        printf("\nEnter any integer number:");
        scanf("%d", &num);
    }//end of while loop


    while (num > 1)//start of while loop
    {
        if(num % 2 == 0)//if number is even
        {
            num = num / 2;
            printf("\nNext value is:%d",num);
        }

        else//if number is odd
        {
            num = (num * 3) + 1;
            printf("\nNext value is :%d",num);
        }//end of  if statement

        i = i + 1;
    }//end of while loop
    
    printf("\nFinal Value is 1, total number of steps:%d",i);
    
    
    return 0;
    
}