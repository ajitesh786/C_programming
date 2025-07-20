# include<stdio.h>
int _sum(int *x,int*y);
int main() {
    int a,b;
    printf("Enter number a and b : ");
    scanf("%d %d",&a,&b);
    printf("sum is : %d",_sum(&a,&b));
    return 0;
}
int _sum(int *x,int *y) {
    int sum = *x + *y;
    return sum;
}