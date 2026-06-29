#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100];
    printf("1. Length\n2. Concatenate\nChoice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter string: ");
        scanf("%s", str1);
        printf("Length: %lu\n", strlen(str1));
    } else if (choice == 2) {
        printf("Enter string 1: ");
        scanf("%s", str1);
        printf("Enter string 2: ");
        scanf("%s", str2);
        strcat(str1, str2);
        printf("Concatenated: %s\n", str1);
    }
    return 0;
}
