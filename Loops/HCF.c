#include <stdio.h>

int HCF(int a, int b);

int main() {
    int a, b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("Zero is not valid.\n");
        return 1;
    }

    int result = HCF(a, b);
    printf("HCF of two numbers is: %d\n", result);
    return 0;
}

int HCF(int a, int b) {
    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
