#include <stdio.h>

int prime(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    return (count == 2) ;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (prime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
