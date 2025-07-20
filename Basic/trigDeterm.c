#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);
    if (a==b && a==c && b==c)
    {
        /* code */printf("Equilateral Trangle");
    } else if(a==b || b==c || a==c) {
        printf("Iscosceles Triangle");
    } else {
        printf("Scalene Triangle");
    }
    return 0;
}