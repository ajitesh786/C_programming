#include<stdio.h>
int main() {
    int a,b,x;
    a = 10 , b= 8;
    x = a &b;
    printf("%d\n",x);
    x = a|b;
    printf("%d\n",x);
    x = ~a;
    printf("%d\n",x);
    return 0;
}