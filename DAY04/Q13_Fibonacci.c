#include<stdio.h>

int main()
{

    int i, a = 0, b = 1, n ,c;
     printf("Enter number: ");
     scanf("%d" ,&n);

     printf("%d %d ", a, b);

     for ( i = 2; i <=n; i++)
     {
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;

     }

     return 0;







}