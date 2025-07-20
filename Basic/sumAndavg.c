#include<stdio.h>
int main() {
    int n,sum=0;
    float Avg;
    for (int i=1;i<=10; i++) {
        printf("enter number %d : ",i);
        scanf("%d",&n);
        sum = sum+n;
    }
    printf("sum is %d\n",sum);
    Avg = sum/10.0;
    printf("Avg is %f\n",Avg);
    return 0;
}