#include <stdio.h>
#include <string.h>

#define SIZE 6
#define GUESS 25

void enter(char **);
void File(FILE *);

int main()
{
    //part (a) 5marks
	char *Avenger_members[SIZE] = {"Iron Man", "Captain America", "Black Widow", "Thor", "Hulk", "Hawkeye"};
    //int result = 0; 
    FILE *file;
    
    printf("\nWelcome to the Avengers name guessing game!\n");

    enter(Avenger_members);
    File(file);

	return 0;
}
//part (b)
void enter(char ** members)
{
    char guess[GUESS];

    printf("\nPlease guess the name of an Avenger:\n");
    //scanf("%s", guess);
    while(getchar() != '\n');
    fgets(guess, GUESS, stdin);
    guess[strlen(guess)] = '\0';

    for(int i = 0; i < SIZE; i++)
    {
        if (strcmp(guess, members[i])== 0)
        {
            printf("\nCorrect");
            return;
        }
    }

    printf("\nBad guess - not an Avenger");

    //return 0;
    
}

void File(FILE *file)
{
    char favouriteAvng[GUESS];
    file = fopen("Avengers.txt", "a");

    if(file == NULL)
    {
        printf("\nError Opening File");
    }
    else
    {
        printf("\nAvengers.txt file opened successfully");

        printf("\nEnter the name of your favourite Avenger:\n");
        fgets(favouriteAvng, GUESS, stdin);
        while(getchar() != '\n');

        fprintf(file, "%s\n", favouriteAvng);
    }

    fclose(file);
}
