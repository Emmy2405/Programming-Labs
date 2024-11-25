#include <stdio.h>
#include <string.h>
/* 
int main() 
{
    char str[] = "Hello, world!";
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}



int main() {
    char source[] = "Hello, world!";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}



int main() {
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}


int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    if (result < 0)
        printf("%s is less than %s\n", str1, str2);
    else if (result > 0)
        printf("%s is greater than %s\n", str1, str2);
    else
        printf("%s is equal to %s\n", str1, str2);
    return 0;
}



int main() {
    char str[] = "Hello, world!";
    char *ptr = strchr(str, 'o');
    if (ptr != NULL)
        printf("Found 'o' at position: %ld\n", ptr - str);
    else
        printf("'o' not found\n");
    return 0;
}



int main() {
    char str[] = "Hello, world!";
    char *ptr = strrchr(str, 'o');
    if (ptr != NULL)
        printf("Found 'o' at position: %ld\n", ptr - str);
    else
        printf("'o' not found\n");
    return 0;
}



int main() {
    char str[] = "Hello, world!";
    char *substr = "world";
    char *ptr = strstr(str, substr);
    if (ptr != NULL)
        printf("Substring '%s' found at position: %ld\n", substr, ptr - str);
    else
        printf("Substring '%s' not found\n", substr);
    return 0;
}



int main() {
    char str[] = "Hello, world! How are you?";
    char *token = strtok(str, " ,!?");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,!?");
    }
    return 0;
}



int main() {
    char str[20];
    memset(str, '*', sizeof(str));
    printf("Filled string: %s\n", str);
    return 0;
}



int main() {
    char source[] = "Hello, world!";
    char destination[20];
    memcpy(destination, source, sizeof(source));
    printf("Copied string: %s\n", destination);
    return 0;
}


int main() {
    char str[] = "Hello, world!";
    memmove(str + 7, str + 5, 5);
    printf("Modified string: %s\n", str);
    return 0;
}



int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result = memcmp(str1, str2, 5); // Compare only first 5 characters
    if (result < 0)
        printf("First 5 characters of %s are less than first 5 characters of %s\n", str1, str2);
    else if (result > 0)
        printf("First 5 characters of %s are greater than first 5 characters of %s\n", str1, str2);
    else
        printf("First 5 characters of %s are equal to first 5 characters of %s\n", str1, str2);
    return 0;
}



int main() {
    char str[] = "Hello, world!";
    char *ptr = memchr(str, 'o', strlen(str));
    if (ptr != NULL)
        printf("Found 'o' at position: %ld\n", ptr - str);
    else
        printf("'o' not found\n");
    return 0;
}



int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result = memcmp(str1, str2, 5); // Compare only first 5 characters
    if (result < 0)
        printf("First 5 characters of %s are less than first 5 characters of %s\n", str1, str2);
    else if (result > 0)
        printf("First 5 characters of %s are greater than first 5 characters of %s\n", str1, str2);
    else
        printf("First 5 characters of %s are equal to first 5 characters of %s\n", str1, str2);
    return 0;
}



int main() {
    char str[] = "Hello, world!";
    memmove(str + 7, str + 5, 5);
    printf("Modified string: %s\n", str);
    return 0;
}


int main() {
    char source[] = "Hello, world!";
    char destination[20];
    memcpy(destination, source, sizeof(source));
    printf("Copied string: %s\n", destination);
    return 0;
}


int main() {
    char str[20];
    memset(str, '*', sizeof(str));
    printf("Filled string: %s\n", str);
    return 0;
}


int main() {
    char str[] = "Hello, world! How are you?";
    char *token = strtok(str, " ,!?");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,!?");
    }
    return 0;
}


int main() {
    char str[] = "314159";
    char accept[] = "1234567890";
    int length = strspn(str, accept);
    printf("Length of initial segment containing only digits: %d\n", length);
    return 0;
}


int main() {
    char str[] = "abc123def456";
    char reject[] = "1234567890";
    int length = strcspn(str, reject);
    printf("Length of initial segment not containing digits: %d\n", length);
    return 0;
}


*/
