#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int l, h;
    int isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    l = 0;
    h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
