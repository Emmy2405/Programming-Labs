#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char line[1000];
    int lineNumber = 1;

    // Ask user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read lines from the file and display them along with line numbers
    printf("\nContents of the file:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%d. %s", lineNumber, line);
        lineNumber++;
    }

    // Close the file
    fclose(file);

    return 0;
}
