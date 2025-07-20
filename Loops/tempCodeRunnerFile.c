#include<stdio.h>
int main() {
    int i,n;
    int num1 = 0,num2 = 1;
    printf("Enter number of terms to print : ");
    scanf("%d",&n);
    printf("Fibonacci series are : ");
    for(i = 1 ; i<=n; i++) {
    
    printf("%d ",num1);
        int temp = num2;
        num2 = num2 + num1;
        num1 = temp;

    }
}