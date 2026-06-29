#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, val, i;
    while(1) {
        printf("\n1. Insert\n2. Display\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &val);
            arr[n++] = val;
        } else if (choice == 2) {
            printf("Array: ");
            for (i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid\n");
        }
    }
    return 0;
}
