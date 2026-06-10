#include <stdio.h>

 int fib(int n){
   if(n == 0) return 0;
   if(n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main(){
 int  n, fibonacci ;
 
 printf("Enter a number: ");
    scanf("%d", &n);
    fibonacci = fib(n);
    printf("fibonacci of %d = %d\n", n, fibonacci);
    return 0;
}