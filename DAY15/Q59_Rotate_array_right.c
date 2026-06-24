#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    
  
    for(int i = 0; i < k; i++)
        temp[i] = arr[n-k+i];
    
   
    for(int i = n-k-1; i >= 0; i--)
        arr[i+k] = arr[i];
    
   
    for(int i = 0; i < k; i++)
        arr[i] = temp[i];
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
    
    rotateRight(arr, n, k);
    
    printf("After:  ");
    printArr(arr, n);
    
    return 0;
}