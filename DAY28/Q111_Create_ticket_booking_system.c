#include <stdio.h>

int main() {
    int choice, tickets;
    printf("1. Movie A (Rs 150)\n2. Movie B (Rs 200)\nSelect movie: ");
    scanf("%d", &choice);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    
    if (choice == 1) printf("Total Cost: Rs %d\n", tickets * 150);
    else if (choice == 2) printf("Total Cost: Rs %d\n", tickets * 200);
    else printf("Invalid choice\n");
    
    return 0;
}
