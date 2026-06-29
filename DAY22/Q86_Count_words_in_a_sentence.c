#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int count = 1, i;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i] != '\n') {
            count++;
        }
    }
    printf("Number of words: %d\n", count);
    return 0;
}
