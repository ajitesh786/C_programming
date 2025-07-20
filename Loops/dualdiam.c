#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            printf("%d",j);
        }
        for(j=1;j<=2*i-3;j++){
            printf(" ");
        }
        for(j=2;j<=n-i+2;j++){
            printf("%d",j+n-i);
        }

        printf("\n");
    }
}