#include<stdio.h>
int main() {
    int n, num, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;            // Store original number
    last = num % 10;    // Get last digit

    // Get first digit
    while(num >= 10) {
        num = num / 10;
    }
    first = num;

    sum = first + last;

    printf("Sum of first and last digit is: %d\n", sum);
    return 0;
}
