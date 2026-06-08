#include <stdio.h>

int main() {
    int n, sum = 0, digit, factorial, i;
    int orig;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    orig = n;
    
    while (n != 0) {
        digit = n % 10;
        
       
        factorial = 1;
        for (i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        n /= 10;
    }
    
    if (sum == orig)
        printf("strong number");
    else
        printf("Not strong number");
    
    return 0;
}
