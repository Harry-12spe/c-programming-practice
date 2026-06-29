#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;
    while (1) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) printf("Balance: %.2f\n", balance);
        else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
        } else if (choice == 3) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            if (amount <= balance) balance -= amount;
            else printf("Insufficient funds\n");
        } else if (choice == 4) break;
        else printf("Invalid choice\n");
    }
    return 0;
}
