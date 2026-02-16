

#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  if(n<=1){
      printf("not a prime number");
  }
  int i;
  int flag = 1;
  for(i = 2; i*i<=n; i++){
  if(n%i==0){
      flag = 0;
  break;
  }
  }
  if(flag == 1){
            printf(" a prime number");
  }
  else{
            printf("not a prime number");
  }
  
    return 0;
}
