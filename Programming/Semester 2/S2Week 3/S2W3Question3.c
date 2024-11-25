/*
Program Description:

Author: Eman Abdelatti

Date: 06/02/2024

*/

#include <stdio.h>

int maximum(int, int, int);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int highest = 0;


    printf("\nPlease enter your 3 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    highest = maximum(num1, num2, num3);

    printf("\n\nThe highest number between the 3 are: %d", highest);

    return 0;

}

int maximum(int n1, int n2, int n3)
{
    int highest = 0;


    if(n1 > n2 && n1 > n3)
    {
        highest = n1;
    }
    if(n2 > n1 && n2 > n3)
    {
        highest = n2;
    }
    else
    {
        highest = n3;
    }

    return highest;
}