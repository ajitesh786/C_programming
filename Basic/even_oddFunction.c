#include<stdio.h>
int check(int n);
int main() {
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int sum = check(n);
     if (sum==0) {
        printf("The entered number is even\n");
     } else {
        printf("The entered number is odd");

     }
     return 0;
}
int check(int n) {
    if(n%2 == 0) {
        return 0;
    } else {
        return 1;
    }
}