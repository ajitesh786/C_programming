#include<stdio.h>
int main() {
    int n;
    printf("enter your age : ");
    scanf("%d",&n);
    if (n>=18)
    {
        /* code */printf("eligible to cast his/her own vote");
    } else {
        printf("not eligible to cast his/her own vote");
    }
    return 0;
    
}