#include <stdio.h>
int main() {
    int rows, number = 1;
    printf("Enter rows : ");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++) {
        for(int j= 1; j<=i; j++) {
            printf(" %d",number);
            number = number + 1;
        }
     printf("\n");

    }
    return 0;
}