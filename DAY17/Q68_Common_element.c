#include <stdio.h>

int main() {
    int n, m, p;
    printf("Enter size of array 1: "); scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: "); scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    printf("Enter size of array 3: "); scanf("%d", &p);
    int c[p];
    for (int i = 0; i < p; i++) scanf("%d", &c[i]);

    printf("Common elements: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        int inB = 0, inC = 0;
        for (int j = 0; j < m; j++)
            if (a[i] == b[j]) { inB = 1; break; }
        for (int k = 0; k < p; k++)
            if (a[i] == c[k]) { inC = 1; break; }
        if (inB && inC) {
            printf("%d ", a[i]);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");

    return 0;
}