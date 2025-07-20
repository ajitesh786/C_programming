# include <stdio.h>
int main() {
    int n, sum =0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        printf(" %d",i*i);
      sum = sum + i*i;
    }
    printf("\n");
    printf("The sum of square of  natural number upto %d terms = %d",n,sum);
    return 0;
}