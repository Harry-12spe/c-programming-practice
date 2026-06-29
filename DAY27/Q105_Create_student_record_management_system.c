#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Record:\nID: %d\nName: %s\nMarks: %.2f\n", s.id, s.name, s.marks);
    return 0;
}
