#include <stdio.h>
#include <math.h>
int main() {
    int n , sum= 0;
    printf("Enter number : ");
    scanf("%d",&n);
    float z;
    for(int i=1; i<=n; i++) {
        z = pow(10,i);
            printf(" %d",z-1);
        sum = sum + z-1;
    }
    printf("The sum of the series = %d\n",sum);
    return 0;
}