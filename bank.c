Simple Banking System (menu-driven with functions):
  

#include <stdio.h>

double balance = 0.0;

void deposit() {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);
    if(amount > 0) {
        balance += amount;
        printf("Deposited %.2lf\n", amount);
    } else {
        printf("Invalid amount.\n");
    }
}

void withdraw() {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);
    if(amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawn %.2lf\n", amount);
    } else {
        printf("Invalid amount or insufficient balance.\n");
    }
}

void checkBalance() {
    printf("Current balance: %.2lf\n", balance);
}

int main() {
    int choice;
    do {
        printf("\nBanking System Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: checkBalance(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 4);
    return 0;
}
