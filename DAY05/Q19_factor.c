#include<stdio.h>

int main()
{
    int n, count = 0 ;

printf("Enter number: ");
scanf("%d" ,&n);

for (int i = 1; i <= n; i++) {
      if(n % i == 0) {
       count++;
       printf("%d ", i);
      }
}
printf("\nTotal factors: %d\n", count);

   return 0;
}