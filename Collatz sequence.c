#include <stdio.h>

int main() {
   int num;
      printf("enter your number :");
      scanf("%d",&num);
      printf("%d ",num);
      while (num >= 1){
      if(num%2==0){
        num = num/2;
        printf("%d ",num);
      }
      else {
        num = 3*num+1;
        printf("%d ",num);
      }
      if(num == 1){
        return 0;
      }
    }
    return 0; }

     