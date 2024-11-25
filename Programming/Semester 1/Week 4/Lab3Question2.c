/*

Program Description:

Author:Eman Abdelatti

Date: 10/10/2023

*/

#include <stdio.h>

int main()
{
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    float principle = 0;
    float rate = 0;
    float time = 0;
    char keyval1 = 0;
    char keyval2 = 0;


    Printf("\nEnter:");
    scanf("%d%d%d%d%f%f%f%c%c", &var1 , &var2 , &var3 , &var4 , &principle , &rate , &time , &keyval1 , &keyval2);
    while (getchar() != '\n');

    return 0;
}