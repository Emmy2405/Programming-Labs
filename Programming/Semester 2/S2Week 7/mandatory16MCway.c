#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char sentence[SIZE];
    char *found;

    // counter used to count the number of instances of "is"
    int counter = 0;
    

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strlen(sentence) - 1] = '\0';


    // Checks if the sentence STARTS with "is"
    if (strncmp(sentence, "is ", 3) == 0)
    {
        // increment counter
        counter++;
    }


    // this will find the FIRST and only the first occurance of the words is and place it's memory address into
    // the pointer called found
    found = strstr(sentence, "is");

    // if found does NOT contain NULL, i.e., found conntains the address where "is" is located in the entered string
    if (found != NULL)
    {
        printf("\nfound the word is");
    }


    
    // Find ALL occurances of the word "is"
    while ( (found = strstr(found, " is ")) != NULL)
    {   
        // increment counter
        counter++;

        // move pointer to point at the next character following the occurance of " is " in the sentence
        found++;
    }
        
    printf("\nOccurances: %d\n", counter);

    return 0;
}