/*
Program Description:

Author: Eman Abdelatti

Date: 26/04/2024

*/

#include <stdio.h>
#include <string.h>

#define SIZE 25
#define LENGTH 40

void vowels(char []);
void reverse(char []);
void concatenate(char []);

int main()
{
    char array[SIZE];
    int i;


    printf("\nPlease enter in a string or word (%d characters MAX.):\n", SIZE);
    fgets(array, SIZE, stdin);

    printf("\nThe string that you entered is: %s", array);

    vowels(array);
    reverse(array);
    concatenate(array);

    return 0;
}

void vowels(char arr[])
{
    int counterA = 0;
    int counterE = 0;
    int counterI = 0;
    int counterO = 0;
    int counterU = 0;
    int maxCount = 0;
    char Vowel = '\0';

    for (int  i = 0; arr[i] != '\0'; i++)
    {
        switch(arr[i])
        {
            case 'a':
            case 'A':
            {
                counterA++;
                break;
            }
            case 'e':
            case 'E':
            {
                counterE++;
                break;
            }
            case 'i':
            case 'I':
            {
                counterI++;
                break;
            }
            case 'o':
            case 'O':
            {
                counterO++;
                break;
            }
            case 'u':
            case 'U':
            {
                counterU++;
                break;
            }
        }

    }

    
    if (counterA > maxCount) 
    {
        maxCount = counterA;
        Vowel = 'a';
    }
    if (counterE > maxCount) 
    {
        maxCount = counterE;
        Vowel = 'e';
    }
    if (counterI > maxCount) 
    {
        maxCount = counterI;
        Vowel = 'i';
    }
    if (counterO > maxCount) 
    {
        maxCount = counterO;
        Vowel = 'o';
    }
    if (counterU > maxCount) 
    {
        maxCount = counterU;
        Vowel = 'u';
    }

    printf("\nThe vowel '%c' is most common. It is used %d times.\n", Vowel, maxCount);
    
}

void reverse(char arr[])
{
    int length = strlen(arr);
    char arr2[length];


    printf("\nThe length of the string is: %d", length);

    for (int i = 0; i < length ; i++)
    {
        arr2[(length - 1) - i] = arr[i];
    }

    printf("\nThe reverse order of the string is: %s", arr2);
    
}

void concatenate(char arr[])
{
    char sentence[LENGTH] = "I entered the string ";


    strcat(sentence, arr);

    printf("\n%s", sentence);
}