#include<stdio.h>

int main(){
    int n, sum;
    
    printf("Enter number: ");
    scanf("%d" ,&n);
    sum = 0;
    for(int i = 1; i <= n; i++){
    sum = sum + i;
    }
   
    printf("sum of first %d natural no. = %d ", n, sum);
    

    return 0;















}