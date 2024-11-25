#include <stdio.h>

#define SIZE 7

int main()
{
    int array[SIZE] = { 2,14,26,38,50,73,81};
    int i = 0;
    int number = 0;
    int first = 0;
    int last = 0;
    int middle = 0;
    int result = 0;


    printf("Please enter the number you would like to be searched:\n");
    scanf("%d",&number);

    first = array[0];
    last = SIZE - 1;
    middle = array[3];

    while( first <= last)
    {
        if(number == middle)
        {
            result = number;
        }
        if(number < middle)
        {
            first = middle + 1; 
        }
        if(number > middle)
        {
            last = middle -1;
        }
        
    }

    if(result = number)
    {
        printf("%d is located in the array at index %d", number, i);
    }
    else
    {
        printf("%d is not located in the array ", number);
    }
    return 0;
}