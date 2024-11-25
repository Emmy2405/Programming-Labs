/*
array_name[i] = *(array_name + i)
*/
#include <stdio.h>

int main()
{
    char barack[]={'Y','E','S',' ','W','E',' ','C','A','N'};
    int i;

    //display the contents of barack array
    for(i = 0;i < 10 ; i++)
    {
        printf("%c ", *(barack + i));
    }


    printf("\n\n\n");


    //change the blank elements to an underscore
    for(i = 0;i < 10 ; i++)
    {
        if( *(barack + i) == ' ')
        {
            *(barack + i) = '_';
        }
        printf("%c ", *(barack + i) );
    }

    return 0;

}

#define SIZE 5
int main()
{
    int float my_array[SIZE];

    return 0;
}