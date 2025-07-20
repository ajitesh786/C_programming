#include<stdio.h>
int main() {
    int n;
    int fact = 1;
    int i= 1;
    printf("enter number : ");
        scanf("%d",&n);
    while(i<=n) {
        
        fact = fact * i;
        i++;
    }
    printf("factorial is : %d",fact);
    return 0;
}