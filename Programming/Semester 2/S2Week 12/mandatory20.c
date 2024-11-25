/*
Program Description: This program is displaying the lines of a text file along with the line numbers. The
                     first line should be proceeded by 1., the second by 2., etc., for each line in the text file.

Author: Eman Abdelatti

Date: 23/04/2024

*/
                                                                                         
//header files
#include <stdio.h>

//symbolic names
#define SIZE 85

int main()
{//beginning of main function
    //declaring variables
    FILE *f1;
    char lines[SIZE];
    int linenumber = 1;


    //opeing the file and granting the user access to read it 
    f1 = fopen("lab20.txt", "r");

    if(f1 == NULL)//if the opening of the file wasn't successful
    {//beginning of if statement
        //print statement to inform the user that opening the file wasn't successful
        printf("\nError opening file");

    }//end of if statement
    else//if the opening of the file was successful
    {//beginning of else statement

        //print statement to inform the user that the file was opened successfully
        printf("\nlab20.txt file opened successfully\n");

        while(fgets(lines, SIZE, f1) != NULL)
        {
            printf("\n %d.%s", linenumber, lines);
            linenumber++;
        }

        //closing the file
        fclose(f1);

    }//end of else statement

    return 0;

}//end of main function