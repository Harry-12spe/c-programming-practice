#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *p1 = arr;
    int *p2 = arr + n - 1;
    int temp;

    while (p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before reverse: ");
    printArray(arr, n);

    reverseArray(arr, n);

    printf("After reverse: ");
    printArray(arr, n);

    return 0;
}