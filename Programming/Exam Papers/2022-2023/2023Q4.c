/*

Program Description: This is a program that uses an array to store data for 10 students in your class. 
                     We find the average, the oldest and the youngest of those ages using pointer notations

Author: Eman Abdelatti

Date: 26/11/2023

*/

#include <stdio.h>
//part a
#define SIZE 10

int main()
{
    int CS_students[SIZE];
    int i;
    int sum = 0;
    float average = 0;
    int youngest = 0;
    int oldest = 0;
    
    //part b (i)
    printf("\nPlease enter the %d ages of the students:\n", SIZE);

    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //this for loop is where the user enters the 10 ages of the students
        scanf("%d",&*(CS_students + i));

        //add the current value in sum to the number entered, i.e., keep a running sum total of numbers
        sum = sum + *(CS_students + i) ;
    }//end of for loop

    //part b (ii)
    //for this line the we are finding the average of the ages
    average = (float)sum / SIZE;
    printf("\nThe average of the students' ages is:%.1f",average);//here we are printing the average

    //part b (iii)
    //Here we are letting the oldest value equal to the number in the first element in the array
    oldest = *(CS_students + 0);
    //Here we are letting the youngest value equal to the number in the first element in the array
    youngest = *(CS_students + 0);


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        if(oldest < *(CS_students + i))//beginning of if statement
        {
            //this  if statement is used to find the oldest age
            oldest = *(CS_students + i);
        }//end of if statement

        if(youngest > *(CS_students + i))//beginning of if statement
        {
            //this  if statement is used to find the youngest age
            youngest = *(CS_students + i);
        }//end of if statement
    }//end of for loop

    printf("\nThe oldest age is:%d", oldest);//printing off the oldest age
    printf("\nThe youngest age is:%d", youngest);//printing off the youngest age

    //part b (iv)
    printf("\nThe %d ages are:\n", SIZE);//print statement to print all ages


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This for loop prints off all the students ages
        printf("%d,",*(CS_students + i));
    }//end of for loop
    
    return 0;
}//end main