#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int number = 0;
    int i;

    printf("\nHow many letters will you enter?\n");
    scanf("%d", &number);

    ptr = calloc(number, sizeof(int));

    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    }
    else
    {
        printf("\nMemory Allocated Successfully\n");
        printf("\nPlease enter you %d letters:\n", number);

        for ( i = 0; i < number; i++)
        {
            scanf("%c", &ptr[i]);
        }

        printf("\nyou entered:");
        for ( i = 0; i < number; i++)
        {
            printf("%c", ptr[i]);
        }
        
        free(ptr);
    }
    return 0;
}