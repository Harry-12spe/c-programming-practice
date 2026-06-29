#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
    
    for (i = 0; str1[i] != '\0'; i++) freq1[(int)str1[i]] = 1;
    for (i = 0; str2[i] != '\0'; i++) freq2[(int)str2[i]] = 1;
    
    printf("Common characters: ");
    for (i = 0; i < 256; i++) {
        if (freq1[i] && freq2[i]) printf("%c ", i);
    }
    printf("\n");
    return 0;
}
