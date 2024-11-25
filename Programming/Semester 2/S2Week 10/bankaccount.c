/*
Certainly! Let's create a C program that simulates a simple banking system with the following features:

Create a structure to represent a bank account with fields for account number, account holder's name, account type, and account balance.
Implement functions to perform the following operations:
Create a new account
Display account information
Deposit money into an account
Withdraw money from an account
Delete an account
Use dynamic memory allocation to manage accounts efficiently.
Allow the user to interact with the system by selecting options from a menu.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a bank account
struct Account {
    int accountNumber;
    char holderName[100];
    char accountType[50];
    float balance;
};

// Function prototypes
void createAccount(struct Account **accounts, int *numAccounts);
void displayAccount(struct Account *accounts, int numAccounts);
void deposit(struct Account *accounts, int numAccounts);
void withdraw(struct Account *accounts, int numAccounts);
void deleteAccount(struct Account **accounts, int *numAccounts);

int main() {
    struct Account *accounts = NULL;
    int numAccounts = 0;
    int choice;

    do {
        printf("\nBanking System Menu:\n");
        printf("1. Create Account\n");
        printf("2. Display Account Information\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Delete Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&accounts, &numAccounts);
                break;
            case 2:
                displayAccount(accounts, numAccounts);
                break;
            case 3:
                deposit(accounts, numAccounts);
                break;
            case 4:
                withdraw(accounts, numAccounts);
                break;
            case 5:
                deleteAccount(&accounts, &numAccounts);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    // Free allocated memory
    free(accounts);

    return 0;
}

void createAccount(struct Account **accounts, int *numAccounts) {
    // Increase the size of accounts array
    *accounts = (struct Account *)realloc(*accounts, (*numAccounts + 1) * sizeof(struct Account));
    if (*accounts == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Read account details from user
    printf("Enter account number: ");
    scanf("%d", &((*accounts)[*numAccounts].accountNumber));
    printf("Enter account holder's name: ");
    scanf("%s", (*accounts)[*numAccounts].holderName);
    printf("Enter account type: ");
    scanf("%s", (*accounts)[*numAccounts].accountType);
    printf("Enter account balance: ");
    scanf("%f", &((*accounts)[*numAccounts].balance));

    // Increment number of accounts
    (*numAccounts)++;
}

void displayAccount(struct Account *accounts, int numAccounts) {
    if (numAccounts == 0) {
        printf("No accounts found.\n");
        return;
    }

    printf("Account Information:\n");
    for (int i = 0; i < numAccounts; i++) {
        printf("Account Number: %d\n", accounts[i].accountNumber);
        printf("Account Holder's Name: %s\n", accounts[i].holderName);
        printf("Account Type: %s\n", accounts[i].accountType);
        printf("Account Balance: %.2f\n", accounts[i].balance);
        printf("\n");
    }
}

void deposit(struct Account *accounts, int numAccounts) {
    int accNum;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNum);
    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Account not found.\n");
}

void withdraw(struct Account *accounts, int numAccounts) {
    int accNum;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNum);
    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Account not found.\n");
}

void deleteAccount(struct Account **accounts, int *numAccounts) {
    int accNum;
    printf("Enter account number to delete: ");
    scanf("%d", &accNum);
    int found = 0;
    for (int i = 0; i < *numAccounts; i++) {
        if ((*accounts)[i].accountNumber == accNum) {
            // Move all accounts after the deleted account one position back
            for (int j = i; j < *numAccounts - 1; j++) {
                (*accounts)[j] = (*accounts)[j + 1];
            }
            // Decrease the size of accounts array
            *accounts = (struct Account *)realloc(*accounts, (*numAccounts - 1) * sizeof(struct Account));
            if (*accounts == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            printf("Account deleted successfully.\n");
            (*numAccounts)--;
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Account not found.\n");
}
