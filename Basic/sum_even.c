#include <stdio.h>
int main() {
    int sum=0, n;
    printf("enter number : ");
    scanf("%d",&n);
    printf("The even numbers are : ");
    for(int i=1; i<=(2*n) ; i++) {
        if(i%2 == 0) {
            sum += i;
            printf(" %d,",i);
        }
    } 
    printf("\n");
    printf(" The sum of even number upto %d terms : %d",n,sum );
    return 0;
}