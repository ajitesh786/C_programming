#include<stdio.h>
int main() {
    int n,rem,rev = 0;
    printf("Enter number : ");
    scanf("%d",&n);
    if (n<= 0) {
        printf("%d is not a valid number.\n",n);
        return 1;
    }
    int temp = n;
    while(temp>0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp/ 10;
    }
    if (rev == n) {
        printf("%d is a Palindrome number.\n",n);

    }  else printf("%d is not a Palindrome number.\n",n);
    return 0;
}