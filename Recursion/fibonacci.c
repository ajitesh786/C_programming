#include<stdio.h>

int fibo(int);
int main() {
    int i,n;
      int num1 = 0,num2 = 1;
   
    printf("Enter number of terms to print : ");
    scanf("%d",&n);
    int sum = fibo(n);
    printf("sum of fibonacci series upto to %d terms is : %d\n",n,sum);
    return 0;
}
int fibo(int n){
    if(n ==1 )
    return 0;
    if(n ==2)
    return 1;
    int num1 = fibo(n);
    int num2 = fibo(n-1);
    return fibo(n)+fibo(n-1);

}