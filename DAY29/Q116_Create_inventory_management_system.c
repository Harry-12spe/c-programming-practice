#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item i;
    printf("Enter Item ID: ");
    scanf("%d", &i.id);
    printf("Enter Name: ");
    scanf("%s", i.name);
    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);
    printf("Enter Price: ");
    scanf("%f", &i.price);
    
    printf("\nInventory Record:\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\nTotal Value: %.2f\n", 
           i.id, i.name, i.quantity, i.price, i.quantity * i.price);
    return 0;
}
