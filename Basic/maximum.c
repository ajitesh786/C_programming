#include<stdio.h>
int maxm(int *x,int *y);
int main() {
    int a,b;
    printf("Enter number a & b : ");
    scanf("%d %d",&a,&b);
    printf("%d is the maximum number \n",maxm(&a,&b));
    return 0;
}
int maxm(int *x,int *y){
    if(*x>*y) {
        return *x;
    } else {
        return *y;
    }
}