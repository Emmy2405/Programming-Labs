/*

Description: This code is about finding the volume and surface area of a box and the area of a circle.

Author: Eman Abdelatti

Date: 03/10/2023

*/

#include <stdio.h>

int main()
{
    int height = 10;
    float length = 11.5;
    float width = 2.5;
    float radius = 4.8;
    float pi = 3.14;
    float volume = 0;
    float surface= 0;
    float area = 0;


    //This is the volume of a rectangular box
    volume = height * length * width;

    printf("\nvolume contains %f", volume);
    
    //This is the surface area of a rectangular box
    surface = ((height* length)*( height * width)*(length * width)) * 2;

    printf("\nsurface contains %f", surface);

    //This the the area of a circle given that pi is 3.14
    area = (radius * pi)*( radius * pi);

    printf("\narea contains %f", area);


    return 0;

}