#include<stdio.h>
int IsPerfect(int n) {
    int sum = 0;
for (int i = 1; i < n; i++) {
          if(n % i == 0){
            sum += i;
        
          }
        }
        if(sum == n) return 1;
        else return 0;
    }
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(IsPerfect(n) == 1) {
    printf("perfect no.");
} else {
    printf("not perfect");
}
            
   

        return 0;

   
}