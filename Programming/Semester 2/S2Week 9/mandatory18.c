/*
Program Description: Program where the user enters data for a person's first name, surname, date of birth (use a nested structure),
                     height, weight, eye colour & country of citizenship. They then must  display all the data entered , copy the data
                     and store it in a 2nd person's record. Modify the first name, surname and date of birth only.
                     Lastly display all the data for the 2nd person.

Author: Eman Abdelatti

Date: 19/03/2024

*/

//header files
#include <stdio.h>

//symbolic name
#define SIZE 25

//structure for the date of birth
struct DOB 
{
    int day;
    int month;
    int year;
};

//structure for the biography of the user
struct bio 
{
    char firstname[SIZE];
    char surname[SIZE];
    struct DOB date;//nested structure
    float height;
    float weight;
    char eye_colour[SIZE];
    char country[SIZE];
};

int main()
{//beginning of main function

    //declaring my variables
    struct bio person1, person2;


    //where the user is prompted to enter in their first name
    printf("\nPlease enter your first name:");
    //fgets(person1.firstname, SIZE, stdin);
    scanf("%s", person1.firstname);

    //where the user is prompted to enter in their second name
    printf("Please enter your second name:");
    //fgets(person1.surname, SIZE, stdin);
    scanf("%s", person1.surname);

    //where the user is prompted to enter in their DOB
    printf("Please enter your date of birth (in order of DD/MM/YYYY):");
    scanf("%d", &person1.date.day);//where the day is entered 
    scanf("%d", &person1.date.month);//where the month is entered
    scanf("%d", &person1.date.year);//where the year is entered

    //where the user is prompted to enter in their height
    printf("Please enter in your height(in cm):");
    scanf("%f", &person1.height);

    //where the user is prompted to enter in their weight
    printf("Please enter in your weight(in kg):");
    scanf("%f", &person1.weight);

    //where the user is prompted to enter in their eye colour
    printf("Please enter your eye colour:");
    //fgets(person1.eye_colour, SIZE, stdin);
    scanf("%s", person1.eye_colour);

    //where the user is prompted to enter in their country of citizenship
    printf("Please enter your country of citizenship:");
    //fgets(person1.country, SIZE, stdin);
    scanf("%s", person1.country);

    //Where the first name of person1 is printed
    printf("\n\nThe first name of the user entered is: %s", person1.firstname);
    //Where the surname of person1 is printed
    printf("\nThe surname of %s is: %s", person1.firstname, person1.surname);
    //Where the DOB of person1 is printed
    printf("\nThe DOB of %s is: %d/%d/%d", person1.firstname, person1.date.day, person1.date.month, person1.date.year);
    //Where the height of person1 is printed
    printf("\nThe height of %s is: %.1f", person1.firstname, person1.height);
    //Where the weight of person1 is printed
    printf("\nThe weight of %s is: %.1f", person1.firstname, person1.weight);
    //Where the eye colour of person1 is printed
    printf("\nThe eye colour of %s is: %s", person1.firstname, person1.eye_colour);
    //Where the country of citizenship of person1 is printed
    printf("\nThe country of citizenship of %s is: %s", person1.firstname, person1.country);


    person2 = person1;//copying the data from person 1 to person 2


    printf("\n\n\nHere is the data of person 2 copied from person 1 unchanged");
    //Where the first name of person2 is printed
    printf("\n\nThe first name of the user entered is: %s", person2.firstname);
    //Where the surname of person2 is printed
    printf("\nThe surname of %s is: %s", person2.firstname, person2.surname);
    //Where the DOB of person2 is printed
    printf("\nThe DOB of %s is: %d/%d/%d", person2.firstname, person2.date.day, person2.date.month, person2.date.year);
    //Where the height of person2 is printed
    printf("\nThe height of %s is: %.1f", person2.firstname, person2.height);
    //Where the weight of person2 is printed
    printf("\nThe weight of %s is: %.1f", person2.firstname, person2.weight);
    //Where the eye colour of person2 is printed
    printf("\nThe eye colour of %s is: %s", person2.firstname, person2.eye_colour);
    //Where the country of citizenship of person2 is printed
    printf("\nThe country of citizenship of %s is: %s", person2.firstname, person2.country);

    //where person 2 is prompted to enter in their first name
    printf("\nPlease enter your first name(person 2):");
    scanf("%s", person2.firstname);

    //where person 2 is prompted to enter in their second name
    printf("\nPlease enter your second name(person 2):");
    scanf("%s", person2.surname);

    //where person 2 is prompted to enter in their DOB
    printf("Please enter your date of birth (in order of DD/MM/YYYY) (person 2):");
    scanf("%d", &person2.date.day);//where the day is entered 
    scanf("%d", &person2.date.month);//where the month is entered
    scanf("%d", &person2.date.year);//where the year is entered
    
    printf("\n\n\nHere is the data of person 2 copied from person 1 modified");
    //Where the first name of person2 is printed
    printf("\n\nThe first name of the user entered is: %s", person2.firstname);
    //Where the surname of person2 is printed
    printf("\nThe surname of %s is: %s", person2.firstname, person2.surname);
    //Where the DOB of person2 is printed
    printf("\nThe DOB of %s is: %d/%d/%d", person2.firstname, person2.date.day, person2.date.month, person2.date.year);
    //Where the height of person2 is printed
    printf("\nThe height of %s is: %.1f", person2.firstname, person2.height);
    //Where the weight of person2 is printed
    printf("\nThe weight of %s is: %.1f", person2.firstname, person2.weight);
    //Where the eye colour of person2 is printed
    printf("\nThe eye colour of %s is: %s", person2.firstname, person2.eye_colour);
    //Where the country of citizenship of person2 is printed
    printf("\nThe country of citizenship of %s is: %s", person2.firstname, person2.country);

    return 0;

}//end of main function