#include<stdio.h>
int square(int a);
int main() {
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int sum = square(a);
    printf("The square of %d is : %d",a,sum);
    return 0;
}
int square(int a) {
    return a*a;
}