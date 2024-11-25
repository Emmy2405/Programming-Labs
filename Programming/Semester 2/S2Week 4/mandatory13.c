/*
Program Description: Program that asks the user to enter 5 numbers from standard input. 
                    Pass the array to a function where the function checks each number in
                    the array if it is even or odd. The function should display each number and state
                    whether it is even or odd. The function should calculate the total number of
                    even numbers only and return this number to the main() and display it.

Author: Eman Abdelatti

Date: 13/02/2024

*/

#include <stdio.h>

#define SIZE 5

int EvenOdd(int*);//funtion signature

int main()//beginning of main() function
{
    //declaring variables
    int array[SIZE];
    int i = 0;
    int count = 0;


    //where the user is asked to enter in all  numbers
    printf("\nPlease enter %d numbers of your choice:\n", SIZE);
    

    //where the user enters in all numbers into the array
    for(i = 0; i < SIZE; i++)//beginning of for loop
    {
        scanf("%d", &array[i]);
    }//end of for loop

    //declaring the number as odd or even and calculating the total of all even numbers in the array
    count = EvenOdd(array);

    //printing off the total of all the even numbers in the array
    printf("\n\nThe total  of all even numbers entered is:%d", count);

    return 0;
}

int EvenOdd(int *arr)//beginning of EvenOdd() function
{
    //declaring variables
    int i = 0;
    int count = 0;


    //for loop to find out if number is odd or even and to find the sum of even numbers
    for(i = 0; i<SIZE; i ++)//beginning of for loop
    {
        if(arr[i] % 2 == 0)//if statement to declare if the number is even
        {
            //printing off the even numbers2
            printf("\n%d is even",arr[i]);

            //adding the total of even numbers entered
            count++;
        }//end of if statement
        if(arr[i] % 2 != 0 )//if statement to declare if the number is odd
        {
            //printing off the odd numbers
            printf("\n%d is odd",arr[i]);
        }//end of if statement
    }

    return count;//returning the value of the count variable

}