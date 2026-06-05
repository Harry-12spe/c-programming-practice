#include<stdio.h>

int main(){

    int n, original, rev = 0, digit;

    printf("Enter number: ");
    scanf("%d" ,&n);
    original = n;  

  while(n != 0) {
    digit = n % 10;      
    rev = rev * 10 + digit;  
    n /= 10;             
}                  

if (original == rev)
{
    printf("This is palindrome number");
}
else
printf("This is not palindrome no.");

return 0;

}