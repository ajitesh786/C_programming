#include <stdio.h>

int numPrint(int);

int main() {
    int n = 1;
    printf("\n\n Recursion : print first 50 natural numbers :\n");
    printf("-----------------------------------------------\n");
    printf(" The natural numbers are :");
    numPrint(n);
    printf("\n\n"); // Corrected to printf for newline
    return 0;
}

int numPrint(int n) {
    if (n <= 50) {
        printf(" %d ", n);
        numPrint(n + 1);
    }
    return 0; // Added a return statement (though not strictly necessary here)
}