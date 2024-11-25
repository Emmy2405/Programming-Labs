/*
Program Description: Program where the user enters data for a person's first name, surname, date of birth,
                     height, weight, eye colour & country of citizenship. They then must  display all the data entered , copy the data
                     and store it in a 2nd person's record. Modify the 2nd persons data.
                     Lastly display all the data for the 2nd person.

Author: Eman Abdelatti

Date: 12/3/2024

*/

//header files
#include <stdio.h>

//symoblic names
#define SIZE 21
#define SIZE2 35

//structure for the biographical data
struct biograpical_data
{

    char first_name[SIZE];
    char surname[SIZE2];
    int day;
    int month;
    int year;
    float height;
    float weight;
    char eye_colour[SIZE];
    char country[SIZE2];

};


int main()
{//beginning of main function

    struct biograpical_data person1;
    struct biograpical_data person2;


    //where the user enters their first name
    printf("\nPlease enter your first name:\n");
    scanf("%s", person1.first_name);

    //where the user enters their surname
    printf("Please enter your surname:\n");
    scanf("%s", person1.surname);

    //where the user enters the day they were born
    printf("Please enter the day you were born:");
    scanf("%d",&person1.day);

    //where the user enters the month they were born
    printf("The month you were born (in numbers (eg. 06) and not words (eg. June)):");
    scanf("%d",&person1.month);

    //where the user enters the year they were born
    printf("The year you were born:");
    scanf("%d", &person1.year);

    //where user enters in their height
    printf("Please enter in your height (in cm):");
    scanf("%f", &person1.height);

    //where the user enters in their weight
    printf("Please enter in your weight(in kg):");
    scanf("%f", &person1.weight);

    //where the user eters in their eye colour
    printf("Please enter in your eye colour:");
    scanf("%s", person1.eye_colour);

    //where the user enters in their country of citizenship
    printf("Please enterin your country of citizenship:");
    scanf("%s", person1.country);


    //printing out all of person 1 data
    printf("\nThe first name of the first person is: %s", person1.first_name);
    printf("\nThe surname of %s is : %s", person1.first_name, person1.surname);
    printf("\nThe date of birth of %s is %d/%d/ %d", person1.first_name, person1.day, person1.month, person1.year);
    printf("\nThe height of %s is %.2f", person1.first_name, person1.height);
    printf("\nThe weight of %s is %.2fkg", person1.first_name, person1.weight);
    printf("\nThe eye colour of %s is %s", person1.first_name, person1.eye_colour);
    printf("\nThe country of citizenship for  %s is %s", person1.first_name, person1.country);

    person2 = person1;

    printf("\n\nPerson 2 details unchanged:");

    printf("\nThe first name of the first person is: %s", person2.first_name);
    printf("\nThe surname of %s is : %s", person2.first_name, person2.surname);
    printf("\nThe date of birth of %s is %d/%d/ %d", person2.first_name, person2.day, person2.month, person2.year);
    printf("\nThe height of %s is %.2f", person2.first_name, person2.height);
    printf("\nThe weight of %s is %.2fkg", person2.first_name, person2.weight);
    printf("\nThe eye colour of %s is %s", person2.first_name, person2.eye_colour);
    printf("\nThe country of citizenship for  %s is %s", person2.first_name, person2.country);

    printf("\n\nPerson 2 details changed:");


    //where the user enters their first name
    printf("\n\n\n\nPlease enter your first name:\n");
    scanf("%s", person2.first_name);

    //where the user enters their surname
    printf("Please enter your surname:\n");
    scanf("%s", person2.surname);

    //where the user enters the day they were born
    printf("Please enter the day you were born:");
    scanf("%d",&person2.day);

    //where the user enters the month they were born
    printf("The month you were born (in numbers (eg. 06) and not words (eg. June)):");
    scanf("%d",&person2.month);

    //where the user enters the year they were born
    printf("The year you were born:");
    scanf("%d", &person2.year);

    //where user enters in their height
    printf("Please enter in your height (in cm):");
    scanf("%f", &person2.height);

    //where the user enters in their weight
    printf("Please enter in your weight(in kg):");
    scanf("%f", &person2.weight);

    //where the user eters in their eye colour
    printf("Please enter in your eye colour:");
    scanf("%s", person2.eye_colour);

    //where the user enters in their country of citizenship
    printf("Please enterin your country of citizenship:");
    scanf("%s", person2.country);


    //printing out all of person 2 data
    printf("\nThe first name of the first person is: %s", person2.first_name);
    printf("\nThe surname of %s is : %s", person2.first_name, person2.surname);
    printf("\nThe date of birth of %s is %d/%d/ %d", person2.first_name, person2.day, person2.month, person2.year);
    printf("\nThe height of %s is %.2f", person2.first_name, person2.height);
    printf("\nThe weight of %s is %.2fkg", person2.first_name, person2.weight);
    printf("\nThe eye colour of %s is %s", person2.first_name, person2.eye_colour);
    printf("\nThe country of citizenship for  %s is %s", person2.first_name, person2.country);

    return 0;

}//end of main function

