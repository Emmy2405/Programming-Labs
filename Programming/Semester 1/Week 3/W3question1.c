/* 

Description: This code is about displaying the integers of 1-5 and the floating numbers from 1.0 to 2.0

Author: Eman Abdelatti

Date: 04/10/2023

*/

#include <stdio.h>

int main()
{
    int var1 = 1;
    int var2 = 2;
    int var3 = 3;
    int var4 = 4;
    int var5 = 5;
    int var6 = 1.0;
    int var7 = 1.1;
    int var8 = 1.2;
    int var9 = 1.3;
    int var10 = 1.4;
    int var11 = 1.5;
    int var12 = 1.6;
    int var13 = 1.7;
    int var14 = 1.8;
    int var15 = 1.9;
    int var16 = 2.0;
    int sum = 0;
    int sum2 = 0;
    int average = 0;
    

    // This is the sum of the integers from 1 to 5
    sum = var1 + var2 + var3 + var4 + var5;
    printf("\nsum contains %d", sum);

    //This is the method on how to get the points from 1.0 to 2.0
    sum2 = var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16;

    //This is the average of the floating points from 1.0 to 2.0
    average = sum2 / 11;
    printf("\naverage contains %d", average);


    return 0;
}