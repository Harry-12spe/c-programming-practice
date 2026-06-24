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

    int merged[n + m];
    for (int i = 0; i < n; i++) merged[i] = a[i];
    for (int i = 0; i < m; i++) merged[n + i] = b[i];

    printf("Merged array: ");
    for (int i = 0; i < n + m; i++) printf("%d ", merged[i]);
    printf("\n");

    return 0;
}