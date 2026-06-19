#include <stdio.h>

int main() {
   int arr[] = {3, 7, 1, 9, 4};

    int size = sizeof(arr) / sizeof(arr[0]); 
    
   
    int smallest = arr[0];
    int largest = arr[0];
    
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
    
    return 0;
}
