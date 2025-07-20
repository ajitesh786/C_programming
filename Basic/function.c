#include<stdio.h>
int sum(int a, int b);
int main() {
    int a,b;
    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);
    int result = sum(a,b);
     printf("sum is : %d",result);
}
int sum(int x,int y) {
    return x+y;
}