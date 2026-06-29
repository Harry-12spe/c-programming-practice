#include <stdio.h>
#include <string.h>

int main() {
    char str[100], res[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            res[j++] = str[i];
        }
    }
    res[j] = '\0';
    printf("String without spaces: %s\n", res);
    return 0;
}
