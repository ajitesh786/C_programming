#include<stdio.h>
int main() {
    int prod = 1;
    int i = 1;
    while (i<=5) {
        prod = prod * i;
        i++;
    }
    printf("product is : %d",prod);
    return 0;
}