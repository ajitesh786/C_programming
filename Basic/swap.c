#include<stdio.h>
int swap(int *a,int *b);
int main() {
    int a,b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("Before swapping : a = %d, b = %d\n",a,b);
    int result = swap(&a,&b);
    
    printf("After swapping a = %d , b = %d",a,b);
    return 0;
}
int swap(int *x,int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
     return 0;
}