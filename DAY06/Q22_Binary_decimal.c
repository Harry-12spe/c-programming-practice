#include<stdio.h>

int main()
{
    int binary, rem, decimal = 0, power = 1;
    
    printf("Enter binary number: ");
    scanf("%d", &binary);
    
    while (binary != 0) {
        rem = binary % 10;                
        decimal = decimal + rem * power;  
        power = power * 2;                
        binary = binary / 10;             
    }
    
    printf("Decimal: %d\n", decimal);
    
    return 0;
}