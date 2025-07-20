#include<stdio.h>
int fact = 10;
int table(int);
int main() {
    int n;
    printf("Enter number to print table : ");
    scanf("%d",&n);
    table(n);
    return 0;
}
int table(int x){
    if(fact ==1)
    return 1;
    printf("%d ",fact*x);
    table(fact-1);
}