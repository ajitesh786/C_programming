#include<stdio.h>
int main() {
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    printf("%d\n",n);
    if (n<0 && n%2 == 0)
    {
        /* code */printf("negative even");
    } else if (n<0 && n%2 !=0) {
        printf("negative odd");

    } else if (n == 0) {
        printf("neither negative nor positive it is only even number ");
    } else if (n>0 && n%2 == 0) {
        printf("positive even");
    } else {
        printf("positive odd");
    }
    return 0;
}