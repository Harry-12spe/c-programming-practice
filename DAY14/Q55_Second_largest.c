#include<stdio.h>
int main() {
    int arr[] = {2, 5 , 8 ,5 ,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int largest = arr[0];
    int secondLargest = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    
    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", secondLargest);
    
    return 0;
}