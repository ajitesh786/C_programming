#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
   int result = sum(n);
   printf("sum of %d is : %d\n",n,result);
    return 0;

}
int sum(int n){
    if (n==1)
    return 1;
    int add=n;
    add = add + sum(n-1);
    return add;
}       