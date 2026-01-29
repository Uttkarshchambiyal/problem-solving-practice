#include <stdio.h>

int main() {
    int n;
    printf("enter your size of number :");
    scanf("%d",&n);
    printf("enter your numbers :\n");
    int a[n];
    for(int i = 0; i <= n-1; i++){
        printf("enter your %d number!",i+1);
        scanf("%d",&a[i]);
    }
    int tofind;
    printf("enter your number to find : ");
    scanf("%d",&tofind);
    int count = 0;
    for(int i = 0; i <= n-1; i++){
        if (tofind==a[i]){
        count ++;}
    }
printf("the number of repeating numbers are : %d",count);
   
return 0;
 }