#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Title: ");
    scanf("%s", b.title);
    printf("Enter Author: ");
    scanf("%s", b.author);
    
    printf("\nBook Added:\nID: %d\nTitle: %s\nAuthor: %s\n", b.id, b.title, b.author);
    return 0;
}
