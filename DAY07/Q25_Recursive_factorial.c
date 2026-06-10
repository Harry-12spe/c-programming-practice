#include <stdio.h>

int fact(int n){
   if(n == 0 || n == 1) return 1;
    return n * fact(n-1);
}

int main(){
 int n;
 long long factorial;
 printf("Enter a number: ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of %d = %lld\n", n, factorial);
    return 0;
}
