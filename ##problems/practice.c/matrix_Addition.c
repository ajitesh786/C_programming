#include<stdio.h>
int main() {
    int A[20][20],i,j,m,n,temp;
    printf("Enter order of matrix (m*n): ");
    scanf("%d",&m,&n);
    printf("Enter elements of matrix : ");
    for(i =0 ; i<m; i++) {
        for(j = 0; j<n; j++ ) {
            scanf("%d",&A[i][j]);
        }
    }
    // Adition of Matrix is : 
    for(i =0 ; i<m; i++) {
        for(j = i; j<n; j++ ) {
        temp = A[i][j];
        A[i][j] = A[j][i];
        A[j][i] = temp;
        }
    }
    printf("Transpose of matrix : ");
    for(i =0 ; i<m; i++) {
        for(j = 0; j<n; j++ ) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}