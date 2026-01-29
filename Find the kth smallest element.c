#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
int a[n];
for(int i = 0; i <= n-1; i++){
scanf("%d",&a[i]);
}
int k;
scanf("%d",&k);
int i , j , min , temp;
for(i = 0; i<k; i++){
    min = i;
    for(j = i+1; j < n; j++){
        if(a[j]<a[min])
        min = j;
    }
    temp = a[i];
    a[i] = min;
    a[min] = temp;
}
printf("the smallest number is %d",a[k-1]);
return 0;
}