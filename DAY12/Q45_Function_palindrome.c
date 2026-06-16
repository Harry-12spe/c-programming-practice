#include<stdio.h>

int palindrome(int n){

int original, rev = 0, digit;

original = n;
while(n != 0) {
    digit = n % 10;      
    rev = rev * 10 + digit;  
n /= 10;             
}                  
return (original == rev);

}





int main(){

    int n;
    
    printf("Enter number: ");
    scanf("%d" ,&n);
    
    if (palindrome(n))
    {
       printf("This is palindrome number");
    }
    else
       printf("This is not palindrome no.");

    return 0;

}