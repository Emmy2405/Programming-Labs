/*
Program Description:

Author: Eman Abdelatti

Date: 16/04/2024

*/

//header files
#include <stdio.h>
#include <string.h>

//symbolic names
#define SIZE 80

int main()
{//beginning of main function
    //declaring variables
    FILE *file1 ,*file2;//creating file pointers to a file
    char text1[SIZE];//string array for the text in first text file
    char text2[SIZE];//string array for the text in second text file
    //int result = strcmp(text1, text2);//variable for the comparisons of the text in the files
    int difference = 1;


    //opening the 2 text files and giving the user access to read them
    file1 = fopen("programming1.txt", "r");
    file2 = fopen("programming2.txt", "r");

    //if statement to check if the file was opened successfully
    if(file1 == NULL || file2 == NULL)//if file wasn't found or opened successfully
    {//beginning of if statement

        //printf statement to inform the user that there was an error in opening the file
        printf("\nError opening file");

    }//end of if statement
    else
    {//beginning of else statement
        //printf statement to show the user that the file was found and opened successfully
        printf("\nprogramming1.txt opened successfully\n");
        printf("\n\nprogramming2.txt opened successfully\n");

        

        while(fgets(text1, SIZE, file1) != NULL && fgets(text2, SIZE, file2) != NULL)
        {//beginning of while loop

            //if statement to compare the text in both text files
            if(strcmp(text1, text2) != 0)//if the text is  not the same
            {//beginning of if statement

                printf("\n\nThere is a difference located\n");
                printf("The differences between the files are:");
                printf("\nProgramming1 : %s", text1);
                printf("\nProgramming2 : %s", text2);

            }//end of if statement
            difference++;//incrementing the difference variable to check for the difference in the next line
            
        }//end of while loop

    }//end of else statement

    

    //closing both text files
    fclose(file1);
    fclose(file2);


    return 0;//returning 0 for success

}//end of main function