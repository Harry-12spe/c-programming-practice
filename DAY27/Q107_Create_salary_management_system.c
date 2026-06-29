#include <stdio.h>

int main() {
    float basic, hra, da, total;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    hra = 0.2 * basic;
    da = 0.5 * basic;
    total = basic + hra + da;
    printf("Total Salary: %.2f (Basic: %.2f, HRA: %.2f, DA: %.2f)\n", total, basic, hra, da);
    return 0;
}
