#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int k = n;
    int count = 0;
    while(n>0){
        if((n & 1) == 1){
            count++;}
            n = n/2;
    } 
    int total = 0;
     while(k>0){
            total+=k&1;
            k = k >> 1;
    }
    printf("%d\n",count);
     printf("%d",total);
    return 0;
}