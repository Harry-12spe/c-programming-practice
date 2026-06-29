#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c;
    printf("Enter Name: ");
    scanf("%s", c.name);
    printf("Enter Phone: ");
    scanf("%s", c.phone);
    
    printf("\nContact Saved:\nName: %s\nPhone: %s\n", c.name, c.phone);
    return 0;
}
