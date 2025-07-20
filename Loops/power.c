#include<stdio.h>
int power(int a,int n);
int main() {
    int a,n;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&n);
    if(n<0){
        printf("Negative power not supported in this version.\n");
        return 1;
    }
    int result = power(a,n);
    printf("power is : %d",result);
    return 0;

}
int power(int a,int n) {
    if(n==0){
        return 1;

    }
    int temp;
    temp = a*power(a,n-1);
    return temp;
}