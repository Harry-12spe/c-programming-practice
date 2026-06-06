#include<stdio.h>

int main()
{

    int min, a,b, gcd = 1 ,lcm;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter a: ");
    scanf("%d" ,&b);

   if(a < b)
    min = a;
   else
    min = b;

    for (int i = 1; i <=min; i++){

    if(a % i == 0 && b % i == 0){
              gcd = i;
    }
      
    }
     lcm = (a * b) / gcd;
     printf("LCM = %d", lcm);
    
    

     return 0;

}
   