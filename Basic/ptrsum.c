#include<stdio.h>
int _sum(int x, int y, int *sum);
int main() {
    int a, b;
    int sum = 0;
    printf("Enter number a and b : ");
    scanf("%d %d",&a,&b);
    sum = _sum (a,b , &sum);
    printf("sum is : %d",sum);
    return 0;
}
int _sum(int x,int y ,int *sum) {
    *sum = x + y;
    return *sum;
}