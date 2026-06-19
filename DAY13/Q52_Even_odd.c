#include <stdio.h>

int main() {
    int arr[] = {34, 12, 89, 5, 56, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
 

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
           printf("even no %d\n", arr[i]);
        else
       printf("odd no: %d\n", arr[i]);
    }

    return 0;
}
