#include<stdio.h>
int main() {
    int p,c,m;
    printf("enter your marks of physics : ");
    scanf("%d",&p);
    printf("enter your marks of chemistry : ");
    scanf("%d",&c);
    printf("enter your marks of mathematics : ");
    scanf("%d",&m);
    if (p>=50 && c>=50 && m>=50 && p+c+m >= 150)
    {
        /* code */printf("student is eligible for admission");
    } else{
        printf("student is not eligible for admission");
    }
    return 0;
}