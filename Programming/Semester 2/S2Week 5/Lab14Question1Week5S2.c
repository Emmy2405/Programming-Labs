/*
Program Description:

Author: Eman Abdelatti

Date: 20/02/2024

*/

#include <stdio.h>
#include <string.h>

int main()
{
    //QUESTION 1
    printf("\n%5s", "abcd");

    printf("\n%5s", "abcdef");

    printf("\n%-5s", "abc");

    printf("\n%5.2s", "abcde");

    printf("\n%-5.2s\n", "abcde");


    //QUESTION 2
    char name[7] = {'R', 'o', 'b', 'e', 'r', 't'};

    puts(name);
    //scanf("%s", &name);
    //strcpy(name, "Philip");
    //*(name + 5) = "a";
   // name = "Philip";//no brackets to show that it's an array



    //QUESTION 3
    char *text = "hello";


    printf("%s\n", text);
    printf("%c\n", *text);
    printf("%c\n", *"more text");
    printf("%c\n", *(text + 1));
    printf("%s", text + 1);
    printf( text);
    *(text + 4) = '\0'; printf("\n%s\n", text);
    printf("%s", "text" + 2);

    //QUESTION 5
    char *p = "abcd";
    while(*p)
        putchar(*p++);

    char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while(text <= p);
        puts(p--);

    return 0;
}