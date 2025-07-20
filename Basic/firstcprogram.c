#include<stdio.h>

int main() {
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    if (x == y) {
        printf("Num1 and Num2 are equal.\n");
    } else {
        printf("Num1 and Num2 are not equal.\n");
    }

    return 0;
}
