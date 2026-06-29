#include <stdio.h>

int main() {
    int score = 0, ans;
    printf("Q1. What is 2+2?\n1. 3\n2. 4\n3. 5\nAns: ");
    scanf("%d", &ans);
    if (ans == 2) score++;
    
    printf("Q2. Capital of France?\n1. London\n2. Paris\n3. Rome\nAns: ");
    scanf("%d", &ans);
    if (ans == 2) score++;
    
    printf("Score: %d/2\n", score);
    return 0;
}
