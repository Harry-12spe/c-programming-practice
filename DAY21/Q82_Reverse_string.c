#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') len++;

    printf("Reversed: ");
    for (int i = len-1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}