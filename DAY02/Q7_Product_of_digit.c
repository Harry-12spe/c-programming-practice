#include <stdio.h>

int main() {
    int n, prod = 1, digits;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        digits = n % 10;
        prod = prod * digits;
        n /= 10;
    }
    
    printf("Prod of digits: %d\n", prod);
    return 0;
}