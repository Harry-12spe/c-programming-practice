#include <stdio.h>

int isArmstrong(int n){
  int count = 0;
  int temp = n;
   
  while(temp != 0){
      temp = temp / 10;
      count++;
  }
   
   temp = n;  
   int sum = 0, digit;
   
   while(temp != 0) {
       digit = temp % 10;
       sum = sum + (int)pow(digit, count);
       temp = temp / 10;
   }
   
   if(sum == n)
       return 1;
   else
       return 0;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    
    return 0;
}
    