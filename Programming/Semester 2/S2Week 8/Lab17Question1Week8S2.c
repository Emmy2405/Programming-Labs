/*
Program Description:

Author: Eman Abdelatti

Date: 12/3/2024

*/

#include <stdio.h>

#define SIZE 13
#define SIZE2 4
#define SIZE3 20
#define SIZE4 30


struct card 
{
    char rank[SIZE];
    char suit[SIZE2];
};

struct stockRecord
{
    int stock_number;
    char stock_description[SIZE3];
    int stock_quantity;
};

struct bookRecord
{
    char ISBN[SIZE];
    char book_title[SIZE4];
    char author[25];
    float book_price;
};

struct customerRecord
{
    unsigned int customer_number;
    char customer_name[25];
    char customer_address[45];
    double balance;
};

struct transactionRecord
{
    char transaction_type;
    int transaction_date[3];
    float transaction_amout;
};

struct timeOfday
{
    int hours;
    int minutes;
    int seconds;
    char ampm[2];
};

struct geography
{

};

struct team
{
    char team_name[20];
    int no_ofwins;
    int no_ofdraws;
    no
};

int main()
{
    return 0;
}