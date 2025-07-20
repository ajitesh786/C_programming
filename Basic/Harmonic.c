#include <stdio.h>
int main() {
    int n;
    float sum = 1.0;
    printf("enter number : ");
    scanf("%d",&n);
    printf("Series : 1/1 ");
    for(int i = 2; i<= n; i++ ) {
        sum = sum + 1.0/i;
        printf("+ 1/%d ", i );
    }

    printf("\nSum of series upto %d terms : %.4f",n,sum);
    return 0;
}