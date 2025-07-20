#include <stdio.h>
#include <math.h>
int main () {
    int x,n;
    int term = 1,sum= 0;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input number of terms :");
    scanf("%d",&n);
    printf("The values of the series \n");
    for(int i=1; i<=n; i++) {
        term = term * x * pow(-1,i);
        sum = sum + term;
        printf("%d\n",term);
    }
    printf("The sum = %d",sum);
    return 0;
}