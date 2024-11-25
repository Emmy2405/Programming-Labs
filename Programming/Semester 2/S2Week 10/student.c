#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a student
struct Student {
    int studentID;
    char name[100];
    int age;
    char grade[5];
};

// Function prototypes
void addStudent(struct Student **database, int *numStudents);
void displayDatabase(struct Student *database, int numStudents);
void searchStudent(struct Student *database, int numStudents);
void updateStudent(struct Student *database, int numStudents);
void deleteStudent(struct Student **database, int *numStudents);

int main() {
    struct Student *database = NULL;
    int numStudents = 0;
    int choice;

    do {
        printf("\nStudent Database System Menu:\n");
        printf("1. Add a new student\n");
        printf("2. Display database\n");
        printf("3. Search for a student\n");
        printf("4. Update student information\n");
        printf("5. Delete a student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(&database, &numStudents);
                break;
            case 2:
                displayDatabase(database, numStudents);
                break;
            case 3:
                searchStudent(database, numStudents);
                break;
            case 4:
                updateStudent(database, numStudents);
                break;
            case 5:
                deleteStudent(&database, &numStudents);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    // Free allocated memory
    free(database);

    return 0;
}

void addStudent(struct Student **database, int *numStudents) {
    // Increase the size of database array
    *database = (struct Student *)realloc(*database, (*numStudents + 1) * sizeof(struct Student));
    if (*database == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Read student details from user
    printf("Enter student ID: ");
    scanf("%d", &((*database)[*numStudents].studentID));
    printf("Enter student name: ");
    scanf("%s", (*database)[*numStudents].name);
    printf("Enter student age: ");
    scanf("%d", &((*database)[*numStudents].age));
    printf("Enter student grade: ");
    scanf("%s", (*database)[*numStudents].grade);

    // Increment number of students
    (*numStudents)++;
}

void displayDatabase(struct Student *database, int numStudents) {
    if (numStudents == 0) {
        printf("Database is empty.\n");
        return;
    }

    printf("Student Database:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student ID: %d\n", database[i].studentID);
        printf("Name: %s\n", database[i].name);
        printf("Age: %d\n", database[i].age);
        printf("Grade: %s\n", database[i].grade);
        printf("\n");
    }
}

void searchStudent(struct Student *database, int numStudents) {
    int id;
    printf("Enter student ID to search: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (database[i].studentID == id) {
            printf("Student found:\n");
            printf("Student ID: %d\n", database[i].studentID);
            printf("Name: %s\n", database[i].name);
            printf("Age: %d\n", database[i].age);
            printf("Grade: %s\n", database[i].grade);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Student not found.\n");
}

void updateStudent(struct Student *database, int numStudents) {
    int id;
    printf("Enter student ID to update: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (database[i].studentID == id) {
            printf("Enter new name: ");
            scanf("%s", database[i].name);
            printf("Enter new age: ");
            scanf("%d", &database[i].age);
            printf("Enter new grade: ");
            scanf("%s", database[i].grade);
            printf("Student information updated.\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Student not found.\n");
}

void deleteStudent(struct Student **database, int *numStudents) {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < *numStudents; i++) {
        if ((*database)[i].studentID == id) {
            // Move all students after the deleted student one position back
            for (int j = i; j < *numStudents - 1; j++) {
                (*database)[j] = (*database)[j + 1];
            }
            // Decrease the size of database array
            *database = (struct Student *)realloc(*database, (*numStudents - 1) * sizeof(struct Student));
            if (*database == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            printf("Student deleted successfully.\n");
            (*numStudents)--;
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Student not found.\n");
}
