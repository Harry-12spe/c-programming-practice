#include <stdio.h>
#include <string.h>

int main() {
    char str[100], res[100];
    int freq[256] = {0};
    int i, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 0) {
            freq[(int)str[i]] = 1;
            res[j++] = str[i];
        }
    }
    res[j] = '\0';
    printf("Without duplicates: %s\n", res);
    return 0;
}
