/*

Program Description:

Author: Eman Abdelatti

Date: 19/03/2024

*/

//header files
#include <stdio.h>

//symbolic names
#define SIZE 30

//structure to enter in airline information
struct airline 
{
    char airline_name[SIZE];
    int flight_number;
    char passenger_surname[SIZE];
    int seat_number;
    char destination[SIZE];
    int no_ofbags;
};

//function calls
void enter(struct airline *);
void display(struct airline);

int main()
{//beginning of main function

    //declaring variables
    struct airline passenger1, passenger2;

    printf("\nPlease enter in your information for passenger 1:");
    enter(&passenger1);


    printf("\nPlease enter in your information for passenger 2:");
    enter(&passenger2);

    printf("The airline information for passenger 1 is:");
    display(passenger1);

    printf("The  information for passenger2 is:");
    display(passenger2);

    return 0;
}//end of main function

void enter(struct airline *ptr)
{//beginning of enter function

    while(getchar != '\n');

    printf("\nPlease enter in the airline name:");
    fgets(ptr -> airline_name, SIZE, stdin);

    printf("Please enter in the flight number:");
    scanf("%d", & ptr -> flight_number);

    printf("Please enter in the  surname:");
    fgets(ptr -> passenger_surname, SIZE, stdin);

    printf("Please enter in the seat number:");
    scanf("%d", & ptr -> seat_number);

    printf("Please enter in the destination:");
    fgets(ptr -> destination, SIZE, stdin);

    printf("Please enter in the number of bags:");
    scanf("%d", &ptr -> no_ofbags);

}//end of enter function

void display(struct airline information)
{
    printf("\nAirline name: %s", information.airline_name);
    printf("\nFlight Number: %d", information.flight_number);
    printf("\nPassenger Surname: %s", information.passenger_surname);
    printf("\nFlight Number: %d", information.flight_number);
    printf("\nDestination: %s", information.destination);
}