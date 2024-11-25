/*
Create a structure to represent a book with fields for book ID, title, author, genre, and availability status.
Implement functions to perform the following operations:
Add a new book to the catalog
Display information of all books in the catalog
Search for a book by its title or author
Update the information of a book
Mark a book as borrowed or returned
Delete a book from the catalog
Use dynamic memory allocation to manage book records efficiently.
Allow the user to interact with the system by selecting options from a menu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a book
struct Book {
    int bookID;
    char title[100];
    char author[100];
    char genre[50];
    int availability; // 1 for available, 0 for borrowed
};

// Function prototypes
void addBook(struct Book **catalog, int *numBooks);
void displayCatalog(struct Book *catalog, int numBooks);
void searchBook(struct Book *catalog, int numBooks);
void updateBook(struct Book *catalog, int numBooks);
void borrowBook(struct Book *catalog, int numBooks);
void returnBook(struct Book *catalog, int numBooks);
void deleteBook(struct Book **catalog, int *numBooks);

int main() {
    struct Book *catalog = NULL;
    int numBooks = 0;
    int choice;

    do {
        printf("\nLibrary Catalog System Menu:\n");
        printf("1. Add a new book\n");
        printf("2. Display catalog\n");
        printf("3. Search for a book\n");
        printf("4. Update book information\n");
        printf("5. Borrow a book\n");
        printf("6. Return a book\n");
        printf("7. Delete a book\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(&catalog, &numBooks);
                break;
            case 2:
                displayCatalog(catalog, numBooks);
                break;
            case 3:
                searchBook(catalog, numBooks);
                break;
            case 4:
                updateBook(catalog, numBooks);
                break;
            case 5:
                borrowBook(catalog, numBooks);
                break;
            case 6:
                returnBook(catalog, numBooks);
                break;
            case 7:
                deleteBook(&catalog, &numBooks);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }
    } while (choice != 8);

    // Free allocated memory
    free(catalog);

    return 0;
}

void addBook(struct Book **catalog, int *numBooks) {
    // Increase the size of catalog array
    *catalog = (struct Book *)realloc(*catalog, (*numBooks + 1) * sizeof(struct Book));
    if (*catalog == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Read book details from user
    printf("Enter book ID: ");
    scanf("%d", &((*catalog)[*numBooks].bookID));
    printf("Enter book title: ");
    scanf("%s", (*catalog)[*numBooks].title);
    printf("Enter book author: ");
    scanf("%s", (*catalog)[*numBooks].author);
    printf("Enter book genre: ");
    scanf("%s", (*catalog)[*numBooks].genre);
    (*catalog)[*numBooks].availability = 1; // Book initially available

    // Increment number of books
    (*numBooks)++;
}

void displayCatalog(struct Book *catalog, int numBooks) {
    if (numBooks == 0) {
        printf("Catalog is empty.\n");
        return;
    }

    printf("Library Catalog:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Book ID: %d\n", catalog[i].bookID);
        printf("Title: %s\n", catalog[i].title);
        printf("Author: %s\n", catalog[i].author);
        printf("Genre: %s\n", catalog[i].genre);
        printf("Availability: %s\n", catalog[i].availability ? "Available" : "Borrowed");
        printf("\n");
    }
}

void searchBook(struct Book *catalog, int numBooks) {
    char search[100];
    printf("Enter title or author to search: ");
    scanf("%s", search);

    int found = 0;
    printf("Search Results:\n");
    for (int i = 0; i < numBooks; i++) {
        if (strstr(catalog[i].title, search) || strstr(catalog[i].author, search)) {
            printf("Book ID: %d\n", catalog[i].bookID);
            printf("Title: %s\n", catalog[i].title);
            printf("Author: %s\n", catalog[i].author);
            printf("Genre: %s\n", catalog[i].genre);
            printf("Availability: %s\n", catalog[i].availability ? "Available" : "Borrowed");
            printf("\n");
            found = 1;
        }
    }
    if (!found)
        printf("No matching books found.\n");
}

void updateBook(struct Book *catalog, int numBooks) {
    int id;
    printf("Enter book ID to update: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (catalog[i].bookID == id) {
            printf("Enter new title: ");
            scanf("%s", catalog[i].title);
            printf("Enter new author: ");
            scanf("%s", catalog[i].author);
            printf("Enter new genre: ");
            scanf("%s", catalog[i].genre);
            printf("Book information updated.\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Book not found.\n");
}

void borrowBook(struct Book *catalog, int numBooks) {
    int id;
    printf("Enter book ID to borrow: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (catalog[i].bookID == id) {
            if (catalog[i].availability) {
                catalog[i].availability = 0; // Mark as borrowed
                printf("Book borrowed successfully.\n");
            } else {
                printf("Book is already borrowed.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Book not found.\n");
}

void returnBook(struct Book *catalog, int numBooks) {
    int id;
    printf("Enter book ID to return: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (catalog[i].bookID == id) {
            if (!catalog[i].availability) {
                catalog[i].availability = 1; // Mark as available
                printf("Book returned successfully.\n");
            } else {
                printf("Book is already available.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Book not found.\n");
}

void deleteBook(struct Book **catalog, int *numBooks) {
    int id;
    printf("Enter book ID to delete");
    }
