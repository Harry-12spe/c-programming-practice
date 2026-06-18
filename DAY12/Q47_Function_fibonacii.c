#include<stdio.h>
int Infibonacci(int n){

   int i, a = 0, b = 1, c;
   
 for (i = 2; i <= n-1; i++)
     {
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
   
     }
return c;
}
int main()
{

   int  n;
     printf("Enter number: ");
     scanf("%d" ,&n);
 printf("%d %d ", 0, 1);
 Infibonacci(n);

return 0;
}
     
