#include <stdio.h>

int factorial(int n) {
    int i, factorial = 1;
    
    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial of %d = %d\n", n, factorial(n));
    
    return 0;
}
