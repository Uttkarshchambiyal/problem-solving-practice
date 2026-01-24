
#include <stdio.h>

int main() {
   int n;
      printf("enter your number :");
      scanf("%d",&n);
    int sum = 0;
    int num1 = 0;
    int num2 = 1;

    for(int i = 1; i<=n; i++){
         printf("%d ",num1);
           sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
 

    return 0;
}