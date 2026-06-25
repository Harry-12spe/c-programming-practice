#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in sorted order: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &target);

    int low = 0, high = n-1, found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) { found = mid; break; }
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}