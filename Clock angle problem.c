#include <stdio.h>
#include <math.h>
int main() {
   int hour , min;
   float angle;
      printf("enter your hour :");
      scanf("%d",&hour);
            printf("enter your min :");
             scanf("%d",&min);
      if(hour < 0 || min < 0 || hour > 12 || min >= 60){
         printf("invalid");
      }
      if(hour==12)
      hour=0;
     
angle = fabs((hour*30 + min*0.5)-( min*6));
  
if(angle > 180){
   angle = 360 - angle;}

printf("%.2f",angle);
return 0;
 }