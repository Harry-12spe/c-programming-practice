#include <stdio.h>

struct Account {
    int acc_no;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    printf("Enter Account Number: ");
    scanf("%d", &a.acc_no);
    printf("Enter Name: ");
    scanf("%s", a.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);
    
    printf("\nAccount Created:\nAcc No: %d\nName: %s\nBalance: %.2f\n", a.acc_no, a.name, a.balance);
    return 0;
}
