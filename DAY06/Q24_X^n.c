#include<stdio.h>

int main()
{
    int n, result = 1,x;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter x : ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++) {
          result = result * x;
        
          }
            printf("result : %d",result);

            return 0;
    }