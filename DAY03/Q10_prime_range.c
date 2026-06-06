#include<stdio.h>
int main() {
    int start, end, count;
    
    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(int n = start; n <= end; n++){
        count = 0;
    for (int i = 1; i <= n; i++) {
    if (n % i == 0)
        count++;
  }
   if(count == 2){
    printf("%d ", n);
   }
        
} return 0;
}