#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n - k - 1; i++) {
            printf(" ");
        }
        for (int j = 0; j <= k; j++) {
            printf("#");
        }
        printf("\n");
    }
return 0;
    
}