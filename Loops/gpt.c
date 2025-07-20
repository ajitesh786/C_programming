#include<stdio.h>

int main() {
    int i, j, n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Left numbers
        for(j = 1; j <= n - i + 1; j++) {
            printf("%d", j);
        }

        // Middle spaces
        for(j = 1; j <= 2*i - 3; j++) {
            printf(" ");
        }

        // Right numbers (reverse)
        for(j = n - i + 1; j >= 1; j--) {
            // Avoid duplicating the middle number in row 1
            if (i == 1 && j == n - i + 1) continue;
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
