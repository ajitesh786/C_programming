#include<stdio.h>
int main() {
    int sum=0;
    for(int i=100; i<=200;i++) {
        if(i%9 == 0) {
            sum = sum + i;
            printf(" %d",i);
           
           
        }
    }
    printf("\nThe numbers between 100 and 200, divisible by 9 : %d ",sum);
    return 0;
}