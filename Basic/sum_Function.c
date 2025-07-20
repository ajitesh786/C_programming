#include<stdio.h>
float calsum(int n); 
int main() {
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    float sum = calsum(n);
    printf("The sum of series is : %f",sum);
    return 0;

}
float calsum(int n) {
    float sum = 0.0;
    int product = 1;
    for(int i = 1; i<=n; i++) {
        product = product * i;
        sum  = sum + (float)product /i ;
        
    }
    return sum;
}

