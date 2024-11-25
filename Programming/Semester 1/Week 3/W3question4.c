/*

Program Description: This program is to display the volume of a cube

Author:Eman Abdelatti

Date:06/10/2023

*/

#include <stdio.h>

int main()
{

    float length = 2.8;
    float volume = 0;

    //This is the volume of a cube with the length of 2.8 for each side
    volume = length * length * length;
    printf("volume contains %f", volume);

    return 0;
}