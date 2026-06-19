#include<stdio.h>
int main() {
    int arr[] = {4,5,6,8,44};           
   int size = sizeof(arr) / sizeof(arr[0]);              
    int target = 100;            
    
    for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
        printf("Found at index %d\n", i);
        break;   

    }
}
    int found = 0;   

for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
        printf("Found at index %d\n", i);
        found = 1;   
        break;
    }
}

if (found == 0) {
    printf("Not found\n");
}
    return 0;
}