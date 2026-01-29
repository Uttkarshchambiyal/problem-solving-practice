#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
int a[n];
for(int i = 0; i <= n -1; i++){
    scanf("%d",&a[i]);
}
printf("the reverse are");
for(int i = n-1; i >= 0; i--){
    printf("%d\n",a[i]);}
    return 0;
}