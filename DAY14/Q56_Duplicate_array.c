#include<stdio.h>
int main() {
    int arr[] = {2, 5 , 8 ,5 ,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
    for (int j = i+1; j < size; j++) {
        if (i != j && arr[i] == arr[j]) {
    printf("Duplicate: %d\n", arr[i]);
}
    }
} 
return 0;

    }
    