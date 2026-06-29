#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, total;
    float avg;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    
    total = m1 + m2 + m3;
    avg = total / 3.0;
    
    printf("\nMarksheet for %s\n", name);
    printf("Total: %d/300\nAverage: %.2f\n", total, avg);
    if (avg >= 40) printf("Result: Pass\n");
    else printf("Result: Fail\n");
    return 0;
}
