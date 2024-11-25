/*
Program Description: using 3 functions to find the sum and average of 3 numbers

Author: Eman Abdelatti

Date: 30/01/2024

*/

#include <stdio.h>

int find_sum( int, int, int);

float find_average(int);

int main()//beginning of main() function
{
    //declaring our variables
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int i;
    int sum = 0;
    float average = 0;
    

    //where the user is asked to enter in 3 numbers
    printf("\nPlease enter 3 numbers:\n");
    scanf("%d", &num1);//where user enters num1 
    scanf("%d", &num2);//where user enters num2
    scanf("%d", &num3);//where user enters num3

    //calling the find_sum() function to find the sum of the 3 numbers
    sum = find_sum(num1, num2, num3);

    printf("\n\nThe sum of the 3 numbers are:%d", sum);

    //calling the find_average() function to find the average to the 3 numbers
    average = find_average(sum);

    printf("\n\nThe average of the 3 numbers are:%.3f", average);

    return 0;

}//end of main() function

int find_sum( int n1,int n2, int n3)//beginning of find_sum() function
{
    //declaring our variables
    int sum = 0;
    int average = 0;


    //finding the sum of the 3 numbers
    sum = n1 + n2 + n3;

    //calling the find_average() function to find the average to the 3 numbers
    average = find_average(sum);

    return sum;//returning the sum back to the main() function and the find_average() function

}//end of find_sum() function

float find_average(int sum)//beginning of find_average() function
{
    //declaring our variables
    float average = 0;


    //where we find the average of the 3 numbers
    average = sum / 3;

    return average;//returning the average back to the main() function

}//end of find_average() function