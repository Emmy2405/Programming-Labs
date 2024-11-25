/*
Program Description:

Author: Eman Abdelatti

Date: 30/01/2024

*/

#include <stdio.h>

void values(int, int, int);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;


    //where the user is asked to enter in 3 numbers
    printf("\nPlease enter 3 numbers:\n");
    scanf("%d", &num1);//where user enters num1 
    scanf("%d", &num2);//where user enters num2
    scanf("%d", &num3);//where user enters num3

    values(num1, num2, num3);

    return 0;
}

void values(int n1, int n2, int n3)
{
    int highest = 0;
    int lowest = 0;

    if(n1> n2 && n1 > n3)//if statement to check for the highest value
    {
        highest = n1;
    }
    else if(n2> n1 && n2 > n3)
    {
        highest = n2;
    }
    else
    {
        highest = n3;
    }


    if(n1< n2 && n1 < n3)//if statement to check for the lowest value
    {
        lowest = n1;
    }
    else if(n2 < n1 && n2 < n3)
    {
        lowest = n2;
    }
    else
    {
        lowest = n3;
    }
    


    printf("\nThe highest value is %d", highest);
    printf("\nThe lowest value is %d", lowest);

}