#include<stdio.h>
int main() {
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n; i++) {
        printf("Number is %d and cube of %d is : %d\n",i,i,i*i*i);
    }
    return 0;
}