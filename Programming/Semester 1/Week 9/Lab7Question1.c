/*

Program Description:

Author: Eman Abdelatti

Date: 14/11/2023

*/

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i;


    for (i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
    }
    // Display the contents of arr[8]

    printf("\nThis number is %d", arr[8]);


    for (i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
    }
    // Display the contents of arr[8]

    printf("\nThis number is %d ", arr[8]);

    return 0;
}