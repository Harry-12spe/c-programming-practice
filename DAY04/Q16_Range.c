#include <stdio.h>

int isArmstrong(int num) {
    if (num < 0) return 0;
    
    int orig = num;
    int sum = 0, power = 0, temp = num;
    
    // Count digits
    while (temp != 0) {
        power++;
        temp /= 10;
    }
    
    // Calculate sum of digits raised to power
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        int pw = 1;
        for (int i = 0; i < power; i++) {
            pw = pw * digit;
        }
        sum = sum + pw;
        temp /= 10;
    }
    
    return sum == orig;
}

int main() {
    int start, end;
    
    printf("Enter start of range: ");
    scanf("%d", &start);
    
    printf("Enter end of range: ");
    scanf("%d", &end);
    
    if (start < 0) start = 0;
    if (start > end) {
        printf("Invalid range! Start should be less than end.\n");
        return 1;
    }
    
    printf("\nArmstrong numbers between %d and %d:\n", start, end);
    
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    
    printf("\nTotal Armstrong numbers found: %d\n", count);
    
    return 0;
}