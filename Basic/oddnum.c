#include<stdio.h>
int main() {
    int n,i,odd=1,sum = 0;
    printf("input number : ");
    scanf("%d",&n);
    printf("The odd numbers are : ");
    for(int i=1;i<=n; i++) {
        printf("%d ",odd);
        sum = sum + odd;
        odd = odd + 2;
    }
    printf("\n The sum of odd Natural numbers up to %d terms: %d\n",n,sum);
    return 0;
}