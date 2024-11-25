/*
Program Description: This program is filled with templates and other help for CA1

Author: Mika Quiapos

Date: 26/11/23

*/

#include <stdio.h>

#define SIZE 5

int main()
{
    // Make sure you comment your code !!!


    /* DELIMITERS
    short: %sd      2 bytes
    int: %d         4 bytes  
    long: %ld       8 bytes
    float: %f       4 bytes
    double: %lf     8 bytes
    char: %c        1 byte
    bool(ean): %b   1 byte

    skip over whitespace: %1s (see a section about this in ARRAYS, approx. line 320)
    prints memory address (hexidecimal form): %p
    
    
    an unsigned variable takes the negative range of a numeric variable and places it in the positive range
    e.g. 
    unsigned int num1
    Use %ud for int, %uf for float, etc, as the delimiters for unsigned variables */


    /* OPERATIONS
    + Addition
    - Subtraction
    * Multiplication 
    / Division
    % Modulus */


    /* PRINTING AND SCANNING
    printf("this is how you print something %whatever", whatever);
    scanf("%whatever", &whatever);

    precision specification in a printf()
    Display this number to two decimal places:
    printf("You entered %.2f", whatever); */

    /* DISPLAYING CHARACTER DATA
    char my_char = ' ';
    printf("Enter any character\n");
    
    scanf("%c", &my_char);
    use the getchar() function;

    my_char = getchar();
    printf("my_char contains %c", my_char);
    
    or

    printf("\nYou entered ");
    putchar(my_char); */


    /* IF STATEMENT
    if (condition)
    {
        statement 1;
        ...
        ...
        statement n;
    } // end if*/


    /* IF... ELSE STATEMENT
    if (condition)
    {
        statement 1;
        ...
        ...
        statement n;
    } // end if
    
    else
    {
        statement 1;
        ...
        ...
        statement n;
    } // end else */


    /* IF, ELSE IF, ELSE
    if (condition_1)
    {
        statement 1;
        ...
        ...
        statement n;
    } // end if

    else if (condition_2)
    {
        statement 1;
        ...
        ...
        statement n;
    } // end else if

    else
    {
        statement 1;
        ...
        ...
        statement n;
    } // end else */


    /* NESTED IF STATEMENTS
    if (bank_balance > 0)
    {
        if (bank_balance <= 100)
        {
            printf("\nYour balance is between 1 and 100");
        } // end inner if

    } // end outer if*/


    /* LOGICAL OPERATORS
    AND: &&
    OR: ||
    NOT: ! */


    /* THE SWITCH STATEMENT
    
    EMPTY TEMPLATE:

    switch(variable_name)
    {
        case 'input1':
        {
            statement(s);
            break;
        } // end case 'input1'

        case 'input2':
        {
            statement(s);
            break;
        } // end case 'input2'

        case 'input3.0':
        case 'input3.1':
        case 'input3.2':
        {
            statement(s);
            break;
        } //end cases 'input3'

        default
        {
            statement(s); 
            break;
        } // end default

    } // end switch


    EXAMPLE: 

    char oper;
    float num1, num2, answer;

    printf("Enter a simple maths operation\n");
    scanf("%f", &num1);
    scanf("%c", &oper);
    scanf("%f", &num2);

    switch(oper)
    {
        case '+':
        {
            answer = num1 + num2;
            printf("\n%.1f PLUS %.1f is %.1f", num1, num2, answer);
            break;
        } // end case '+'

        case '-':
        {
            answer = num1 - num2;
            printf("\n%.1f MINUS %.1f is %.1f", num1, num2, answer);
            break;
        } // end case '-'

        case '*':
        case 'x':
        case 'X':
        // similar to: if (oper == '*' || oper == 'x' || oper == 'X')
        {
            answer = num1 * num2;
            printf("\n%.1f MULTIPLY %.1f is %.1f", num1, num2, answer);
            break;
        } // end case '*'

        case '/':
        {
            answer = num1 / num2;
            printf("\n%.1f DIVIDE %.1f is %.1f", num1, num2, answer);
            break;
        } // end case '/'

        default:
        {
            printf("\nInvalid operator entered");
            break;
        } // end default

    } // end switch
    */


    /* THE WHILE LOOP
    
    while(condition)
    {
        statement1;
        ...
        ...
        statement n;
    } // end while
    */


    /* THE DO .. WHILE LOOP
    
    do
    {
        statement 1;
        ...
        ...
        statement n;
    }
    while (condition); // You MUST place a  semi-colon at the end of the do .. while
    */


    /* THE FOR LOOP
    
    for (initial_value; condition; counter)
    {
        statement 1;
        ...
        ...
        statement n;
    } // end for

    EXAMPLE
    for (i = 0; i < SIZE; i++)
    {
        printf("This is how a for loop works: %d", i);
    } // end for
    */


    /* 1-D ARRAYS

    array_data_type array_name [array_size];
    e.g.,
    
    int ages[5]; BUT WAIT use a symbolic name!
    int ages[SIZE];
    
    Remember that the index of an array starts at 0 and ends at SIZE - 1
    */



    /* HIGHEST AND LOWEST IN ARRAYS 
    ALWAYS USE A FOR LOOP WHEN DEALING WITH ARRAYS

    for(i = 0; i < SIZE; i++)
    {
        // find the highest number in the array
        if (highest < my_array[i])
        {
            highest = my_array[i];
        } / end if

        // find the lowest number in the array
        if (lowest > my_array[i])
        {
            lowest = my_array[i];
        } // end if

    } // end for

    // SYMBOLIC NAMES
    #define symbolic_name data_value
    e.g.
    #define SIZE 5

    Symbolic names are always listed below the last #include files
    */


    /* INITIALISING AN ARRAY
    int days[NO_OF_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if you want to fill in all the elements with 0, simply put:
    int my_array[SIZE] = {0}
    
    the OS will automatically assume unfilled elements are 0*/


    /* USING THE %1s DELIMITER USING ARRAYS
    char my_char[SIZE];
    int i;

    printf("Please enter 5 characters \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%1s", &my_char[i]);
    } // end for
  
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%c\n", my_char[i]);
    } // end for*/


    /* 2-D ARRAYS
    array_data_type array_name [no_of_rows][no_of_columns];
    

    EXAMPLE USES

    Use symbolic names for the Rows and Cols
    #define ROW 3
    #define COL 2
    
    int main()
    {
        int my_array[ROW][COL];
        i, j; // counters

        printf("Enter %d numbers\n", ROW*COL);
        // ALWAYS USE A FOR LOOP WHEN DEALING WITH ARRAYS
        for (i = 0; i < ROW; i++)
        {
            // Inner for that handles the Cols
            for (j = 0; j < COL; j++)
            {
                // read in data
                scanf("%d", &my_array[i][j]);
            } // end inner for

        } // end outer for

        for (i = 0; i < ROW; i++)
        {
            // Inner for that handles the Cols
            for (j = 0; j < COL; j++)
            {
                // display the data
                printf("%d", &my_array[i][j]);
            } // end inner for

        } // end outer for
        
        return 0;
    } // end main() 
    */


    /* INITIALISING A 2-D ARRAY 
    1. Method One:
    int numbers[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    2. Method Two (most recommended):
    int numbers[4][3] = {   1, 2, 3,
                            4, 5, 6,
                            7, 8, 9,
                            10, 11, 12
                        };
                        
    3. Method Three
    int numbers[4][3] = {   {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9},
                            {10, 11, 12}
                        }; 
    */


    /* POINTERS
    A pointer variable is a variable that is used to store a memory address.
    It usually stores the memory address of some other variable used in the same program.
    
    data_type *pointer_variable_name;
    
    e.g.
    int *ptr;
    char *my_ptr;
    
    Let's make the pointer POINT at another variable
    int var1;
    int *ptr1;
    
    ptr1 = &var1;
    */


    /* THE DEREFERENCE OPERATOR (THE INDIRECTION OPERATOR)
    int var1 = 1;
    int *ptr1;
    
    ptr1 = &var1; 
    
    // Display the contents of var 1: Two ways
    printf("\nvar 1 contains %d at memory address %p", var1, &var1);
    printf("\nvar 1 contains %d at memory address %p", *ptr1, ptr1);
    */


    /* POINTERS AND ARRAYS
    In C, the name of an array is the same as the memory address location of the first element
    a ≈ &a[0]
    
    The address location of the other elements:
    a       ≈   &a[0];
    a+1     ≈   &a[1];
    a+2     ≈   &a[2];
    a+3     ≈   &a[3];
    a+4     ≈   &a[4];

    Or you can write this as
    *a      ≈   a[0];
    *(a+1)  ≈   a[1];
    *(a+2)  ≈   a[2];
    *(a+3)  ≈   a[3];
    *(a+4)  ≈   a[4];
    
    There are TWO ways you can access an array
    1. Subscript notation
    This is when you use [ and ] to access the elements of an array
    e.g. a[0], a[1], etc.

    2. Pointer notation
    This is when you use the dereference operator to access the array
    e.g. *a, *(a+1), *(a+2), etc.

    array_name[i] ≈ *(array_name + 1)
    */

    /* DYNAMIC MEMORY ALLOCATION (DMA) - he has not covered this yet at the time of me sending this
    There will be situations when you don't know how much memory is required when a program will run.
    In these situations, DMA is the best course to allocate memory while the program is running.

    DMA is provided in two ways:
    1. The malloc() function
    2. The calloc() function
    */


    /* THE malloc() FUNCTION
    malloc() allocates a contiguous block of memory and returns a pointer to the start of the allocated block

    pointer = malloc( size );

    - pointer = pointer contains the address of the start of the allocated memory block
    - size = the total number of bytes required for the memory block

    Once the memory block is allocated, it contains random data
    
    e.g.
    int *ptr;
    ptr = malloc(40)*/


    /* THE calloc() FUNCTION
    calloc() also allocates a contiguous block of memory and returns a pointer to the start of the allocated block
    
    pointer = calloc (number_of_data_items, size_of_each_data_item);
    
    - pointer = pointer contains the address of the start of the allocated memory block
    - number_of_data_items = total number of data that you wish to be stored
    - size = the size of each individual data item, e.g. 4)integer, 2(char)
    
    e.g.
    int *ptr;
    int no_of_numbers = 5;
    
    ptr = calloc(no_of_numbers, 4)
    */


    /* The realloc() function
    The realloc() function is used to change the size of an already dynamically allocated block of memory
    
    pointer = realloc(pointer, new_total_size_of_block);
    
    - pointer = pointer that is pointing at the start of the existing memory block
    - new_total_size_of_block = total size of the increased/decreased block in bytes
    */


    return 0; // DON'T FORGET THE RETURN 0!!!

} // end main()