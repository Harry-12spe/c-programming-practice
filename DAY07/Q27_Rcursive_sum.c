#include <stdio.h>

 int sum(int n){
   if(n == 0) return 0;
  
 return n % 10 + sum(n / 10);
}

int main(){
 int  n,result ;
 
 printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("sum of %d = %d\n", n, result);
    return 0;
}