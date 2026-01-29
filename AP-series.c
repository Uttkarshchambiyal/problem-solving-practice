#include <stdio.h>

int main() {
   int series,d,s;
      printf("enter your total series :");
      scanf("%d",&series);
       printf("enter your first digit to start:");
      scanf("%d",&s);
       printf("enter your diffrence:");
      scanf("%d",&d);
      int newdigit = s;
      printf("%d ",s);
      for (int i = 1; i <= series-1; i++){
             newdigit = newdigit + d;
              printf("%d " ,  newdigit );
      }
      return 0;
    }
      
