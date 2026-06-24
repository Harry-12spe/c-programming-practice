#include <stdio.h>

int main() {
    int n, m;
    printf("Enter size of array 1: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int uni[n + m], size = 0;

   
    for (int i = 0; i < n; i++) uni[size++] = a[i];

    
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (b[i] == uni[j]) { found = 1; break; }
        }
        if (!found) uni[size++] = b[i];
    }

    printf("Union: ");
    for (int i = 0; i < size; i++) printf("%d ", uni[i]);
    printf("\n");

    return 0;
}