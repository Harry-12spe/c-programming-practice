#include <stdio.h>

int main() {
    int n, digit, sum = 0, power = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not Armstrong");
        return 0;
    }

    int orig = n;
    temp = n;
    
    // Count digits
    while (temp != 0) {
        power++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        int pw = 1;
        for (int i = 0; i < power; i++) {
            pw = pw * digit;
        }
        sum = sum + pw;
        temp /= 10;
    }

    if (sum == orig)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}