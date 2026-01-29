#include <stdio.h>
int main(){
    int n;
    printf("enter your number :");
    scanf("%d",&n);
    if (n==1){
        printf("2");
        return 0;
    }
    int count = 1;

   for  (int num = 3;; num++){
      int prime = 1;
    for (int i = 2; i*i <= num; i++){
        if(num%i==0){
         prime = 0;
        break;
        }
    }
    if (prime == 1){
        count ++;
    }
    if (count == n){
        printf("%d ",num);
        break;
    }
}
    return 0;
}