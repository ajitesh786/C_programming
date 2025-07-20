#include<stdio.h>
int main() {
    int i,n;
    int num1 = 0,num2 = 1,sum = 0;
    printf("Enter number of terms to print : ");
    scanf("%d",&n);
    printf("Fibonacci series are : ");
    for(i = 1 ; i<=n; i++) {
    sum = sum + num1;
    printf("%d ",num1);
        int temp = num2;
        num2 = num2 + num1;
        num1 = temp;

    }
    printf("sum of series upto %d terms is : %d\n",n,sum);
    return 0;
}