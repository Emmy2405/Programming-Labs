/*
Program Description:

Author: Eman Abdelatti

Date: 28/04/2024

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int number = 0;
    int highest = 0;
    int lowest = 0;
    int i;
    //variables for realloc
    char answer = 'n';
    int extra_data = 0;
    int new_block_size = 0;

    printf("\nHow many numbers do you wish to enter?\n");
    scanf("%d", &number);

    ptr = calloc( number , sizeof(int));

    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
        return 0;
    }
    else
    {
        printf("\nMemory allocated successfully\n");
        printf("Enter the set of %d numbers:", number);

        for(i = 0; i < number; i++)
        {
            scanf("%d", &ptr[i]);
        }

        highest = ptr[0];
        lowest = ptr[0];

        for(i = 0; i < number; i++)
        {
            if(highest < ptr[i])
            {
                highest = ptr[i];
            }
            if(lowest > ptr[i])
            {
                lowest = ptr[i];
            }
        }

        printf("\nThe highest number entered is: %d", highest);
        printf("\nThe lowest number entered is: %d", lowest);

        printf("\nEnter more numbers? (y/n)");
        scanf("%1s", &answer);

        if(answer == 'n')
        {
            printf("\nNo chamges - memory block remains the same\n");
        }
        else
        {
            printf("\nHow many extra numbers do you wish to enter?\n");
            scanf("%d", &extra_data);

            new_block_size = (number + extra_data) * sizeof(int);

            ptr = realloc(ptr, new_block_size);

            if(ptr == NULL)
            {
                printf("\nFailed to EXPAND memory block for new data\n");
            }
            else
            {
                printf("\nEnter the additional data items\n");

                for(i = 0; i < number + extra_data; i++)
                {
                    scanf("%d", &ptr[i]);
                }

                highest = ptr[0];
                lowest = ptr[0];

                for(i = 0; i < number + extra_data; i++)
                {
                    if(highest < ptr[i])
                    {
                        highest = ptr[i];
                    }
                    if(lowest > ptr[i])
                    {
                        lowest = ptr[i];
                    }
                }

                printf("\nThe new highest number is : %d", highest);
                printf("\nThe new lowest number is: %d ", lowest);
            }
        }

        free(ptr);
    }
    return 0;

}