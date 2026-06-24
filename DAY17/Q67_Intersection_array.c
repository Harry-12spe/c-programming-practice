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

    printf("Intersection: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                b[j] = -99999; 
                break;
            }
        }
    }
    printf("\n");

    return 0;
}