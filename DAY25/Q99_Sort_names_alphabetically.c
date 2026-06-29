#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50], temp[50];
    int n = 5, i, j;
    printf("Enter 5 names:\n");
    for (i = 0; i < n; i++) scanf("%s", names[i]);
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    printf("Sorted names:\n");
    for (i = 0; i < n; i++) printf("%s\n", names[i]);
    return 0;
}
