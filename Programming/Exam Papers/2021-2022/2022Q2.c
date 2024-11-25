/*
Program Description: (a) Using appropriate data types, design a structure template to hold the following patient
                    information in a hospital record system:
                    • First name
                    • Surname
                    • Date of Birth
                    • Address
                    • Phone number
                    (6 marks)
                    (b) Write a C program using the structure template in part (a) above, which uses a function
                    to enter the details for two patients.
                    (10 marks)
                    (c) Write another function to display the details of the patients entered in part (b) above. (10 marks)


Author: Eman Abdelatti

Date: 22/04/2024

*/

//header files
#include <stdio.h>

//symbolic names
#define SIZE 25
#define ADDRESS 50

//structure for date of birth
struct DOB
{
    int day;
    int month;
    int year;
};

//structure for the patient information
struct patientInfo
{
    char firstname[SIZE];
    char surname[SIZE];
    struct DOB dob;
    char address[ADDRESS];
    long int phoneNumber;
};

//function signatures
void Enter(struct patientInfo *);
void Display(struct patientInfo);


int main()
{
    struct patientInfo patient1, patient2;
    
    printf("\nPatient 1 Information:");
    Enter(&patient1);
    printf("\nPatient 1 Information:");
    Display(patient1);



    printf("\nPatient 2 Information:");
    Enter(&patient2);
    printf("\nPatient 2 Information:");
    Display(patient2);

    return 0;

}

void Enter(struct patientInfo *patients)
{
    printf("\nPlease enter your first name:\n");
    scanf("%s", patients->firstname);

    printf("\nPlease enter your Surname:\n");
    scanf("%s", patients->surname);

    printf("\nPlease enter your DOB:\n");
    scanf("%d%d%d", &patients->dob.day, &patients->dob.month, &patients->dob.year);

    while(getchar() != '\n');
    printf("\nPlease enter your Address:\n");
    //scanf("%s", patients->address);
    fgets(patients -> address, ADDRESS, stdin);

    printf("\nPlease enter your phone number:\n");
    scanf("%ld", &patients->phoneNumber);

}

void Display(struct patientInfo patients)
{
    printf("\nFirst Name: %s", patients.firstname);
    printf("\nSurname: %s", patients.surname);
    printf("\nDate Of Birth: %d/%d/%d", patients.dob.day, patients.dob.month, patients.dob.year);
    printf("\nAddress: %s", patients.address);
    printf("Phone Number: %ld\n",patients.phoneNumber);
}