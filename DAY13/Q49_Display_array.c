#include <stdio.h>

void inputArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
}
void displayArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5];
    int n = 5;
    inputArray(arr, n);
    displayArray(arr, n);
    
    return 0;
}