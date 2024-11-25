//Author: Mogamad Shu'aib Isaacs
//Date:20/02/2024
/*Description: This code will print a name and create a String that takes
a name between each letter */

#include <stdio.h>

#define SIZE 25

int main()
{
    char name[SIZE];
    int i;


    //asks user for name
    printf("Enter your name:\n");
    gets(name);

    /*loop prints name with space in between letters
    The && name ensure that the loop ends when the name reaches null
    This is making it check if both conditions are true that i is less than SIZE and the charcter nme is not a null charcter*/
    for (i = 0; i < SIZE && name[i]; i++)
    {
        printf("%c ", name[i]);
        
    }//end for
    

    return 0;

}//end main