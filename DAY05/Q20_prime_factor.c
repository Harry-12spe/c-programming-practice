#include<stdio.h>

int main()
{
    long long n;
    long long largest_prime = -1;
    
    printf("Enter number: ");
    scanf("%lld", &n);
    
    // Check for factor 2
    while (n % 2 == 0) {
        largest_prime = 2;
        n = n / 2;
    }
    
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest_prime = i;
            n = n / i;
        }
    }
    
   
    if (n > 1) {
        largest_prime = n;
    }
    
    printf("Largest prime factor: %lld\n", largest_prime);
    
    return 0;
}