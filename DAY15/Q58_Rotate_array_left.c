#include <stdio.h>

void rotateLeft(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    
   
    for(int i = 0; i < k; i++)
        temp[i] = arr[i];
    
    
    for(int i = k; i < n; i++)
        arr[i-k] = arr[i];
    
   
    for(int i = 0; i < k; i++)
        arr[n-k+i] = temp[i];
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;
    
    printf("Before: ");
    printArr(arr, n);
    
    rotateLeft(arr, n, k);
    
    printf("After:  ");
    printArr(arr, n);
    
    return 0;
}