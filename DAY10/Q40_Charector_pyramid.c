#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print ascending characters
        for (int k = 0; k <= i; k++) {
            printf("%c", 65 + k);
        }
        // Print descending characters
        for (int k = i - 1; k >= 0; k--) {
            printf("%c", 65 + k);
        }
        printf("\n");
    }
    return 0;
}
