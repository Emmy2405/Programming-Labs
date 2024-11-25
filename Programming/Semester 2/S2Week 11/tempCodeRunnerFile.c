#include <stdio.h>
#include <string.h>

#define SIZE 80

int main() {
    FILE *file1, *file2;
    char text1[SIZE];
    char text2[SIZE];
    int line = 1; // Variable to keep track of the current line number

    file1 = fopen("programming1.txt", "r");
    file2 = fopen("programming2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read each line from both files and compare them
    while (fgets(text1, SIZE, file1) != NULL && fgets(text2, SIZE, file2) != NULL) {
        if (strcmp(text1, text2) != 0) {
            printf("Difference in line %d:\n", line);
            printf("File 1: %s", text1);
            printf("File 2: %s", text2);
        }
        line++;
    }

    // Check if one file has more lines than the other
    if (fgets(text1, SIZE, file1) != NULL) {
        printf("File 1 has additional lines:\n");
        printf("%s", text1);
        while (fgets(text1, SIZE, file1) != NULL) {
            printf("%s", text1);
        }
    } else if (fgets(text2, SIZE, file2) != NULL) {
        printf("File 2 has additional lines:\n");
        printf("%s", text2);
        while (fgets(text2, SIZE, file2) != NULL) {
            printf("%s", text2);
        }
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
