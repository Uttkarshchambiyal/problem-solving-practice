#include <stdio.h>
int main(){
int num;
printf("enter the value :");
scanf("%d",&num);
int n = num;
int mainsum = num;
int count = 0;
while(n>0){
n=n/10;
++count;
}
int newnum;
int sum = 0;
int mult = 1;
while(num>0){
      newnum = num%10;
      num = num/10;
for(int i = 1; i <= count; i++){
 mult=  mult*newnum;
}
 sum = sum + mult;
mult = 1;
}       
if (sum == mainsum){
    printf("it is a armstrong series");
}
else {
    printf("its not");
}
return 0;}