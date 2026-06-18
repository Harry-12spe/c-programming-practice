#include <stdio.h>
void sumAverage(int arr[], int n){

    int i;
    int sum = 0;
    float avg;
    
    for(i = 0; i < n; i++)
    {
        sum = sum +arr[i]; 
    }
    
    avg = (float)sum / n;
    
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);
}

int main()
{
    int arr[5];
    int n=5;
    int i;
    for(i = 0; i < n; i++)  
    {
    printf("Enter element: ");
    scanf("%d",&arr[i]);
    }
    sumAverage(arr, n);
    
    return 0;
}