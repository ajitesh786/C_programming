#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, num3, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("%d is not a valid number\n", n);
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += num1;
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    printf("Sum of first %d Fibonacci terms is: %d\n", n, sum);
    return 0;
}
 