/*

Description: This code is about calculating and displaying the remainder for the following arithmetic operations

Author: Eman Abdelatti

Date: 05/10/2023

*/

#include <stdio.h>

int main()
{
    int sum;


    //This is the sum of the modulus for var 1
    sum = 2 % 2;
    printf("\nsum1 contains %d", sum);

    //This is the sum of the modulus for var2 and var1
    sum = 3 % 2;
    printf("\nsum2 contains %d", sum);
    
    //This is the sum of the modulus for var3 and var1
    sum = 5 % 2;
    printf("\nsum3 contains %d", sum);

    //This is the sum of the modulus for var4 and var2
    sum = 7 % 3;
    printf("\nsum4 contains %d", sum);

    //This is the sum of the modulus for var6 and var5
    sum = 100 % 33;
    printf("\nsum5 contains %d", sum);
 
    //This is the sum of the modulus for var6 and var4
    sum = 100 % 7;
    printf("\nsum6 contains %d", sum);
    
    return 0;

}