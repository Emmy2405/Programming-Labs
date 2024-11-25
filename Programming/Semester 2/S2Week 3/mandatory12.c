/*
Program Description: program to demonstrate the use of Pass by Reference with a function  by creating an integer variable 
                     in your main() , initialise it to 1 and print this value here. Next, call the function 
                     and pass this variable as a parameter to the function. Increment the parameter variable 
                     in your function by 2 and print this value. Your function should end here, and execution returns back to where the
                     function was called. Finally, display the value of the variable in your main() again and see if it has changed value


Author: Eman Abdelatti

Date: 06/02/2024

*/

#include <stdio.h>

void incrementation(int *);

int main()//main function
{
    //declaring my variables
    int var = 1;


    //where we print the value of var before incrementing it
    printf("\n\nThe value of var in the main function before incrementing is: %d", var);

    //incrementing var 
    incrementation(&var);

    //where we print the value of var after incrementing it
    printf("\n\nThe value of var in the main function after incrementing is: %d", var);

    return 0;

}//end of main() function

void incrementation(int *num)//beginning of incrementation() function
{
    //incrementing the num(var) variable
    *num = *num + 2;

    //where we print the value of var after incrementing it in the incrementation function
    printf("\n\nThe value of var in the incrementation function after incrementing is: %d", *num);

}