#include<stdio.h>
int main() {
    int n;
    printf("enter integer : ");
    scanf("%d",&n);
    if (n<0 || n>80)
    {
        /* code */printf("error");
    } else {
        printf("well done");
    }
    return 0;
}