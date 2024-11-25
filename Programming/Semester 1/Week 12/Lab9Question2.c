/*

Program Description:

Author: Eman Abdelatti

Date: 05/12/2023

*/

#include <stdio.h>

int main()
{
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    int *ptr3;

    //initialising num1 and char1
    num1 = 3;
    char1 = 'e';

    //initialising ptr1 and ptr2 to point to the variables  
    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &char1;


    //part a of the question
    printf("\nnum1 contains %d and is stored at memory address %p\n", num1 , &num1);
    printf("\nchar1 contains %c and is stored at memory address %p\n", char1 , &char1);

    //part b of the question
    printf("\nThe content of ptr1 is %p", ptr1);
    printf("\nThe content of ptr2 is %p", ptr2);

    //part c of the question
    printf("\nThe content of the address of ptr1 is %d", *ptr1);
    printf("\nThe content of the address of ptr2 is %c", *ptr2);

    //Question 2
    printf("\nThe content of the address of ptr1 is %d", *ptr3);
    printf("\nThe content of the address of ptr2 is %c", *ptr3);

    return 0;
    
}