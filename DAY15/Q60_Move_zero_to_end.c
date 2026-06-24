#include <stdio.h>

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void moveZeros(int arr[], int n) {
    int j = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    
    for(int i = j; i < n; i++)
        arr[i] = 0;
}

int main() {
    int arr[] = {0, 1, 0, 3, 5};
    int n = 5;
    
    printf("Before: ");
    printArr(arr, n);
    
    moveZeros(arr, n);
    
    printf("After:  ");
    printArr(arr, n);
    
    return 0;
}