#include<stdio.h>
int main() {
    int a[10][10],i,j,n,srow =0,scol = 0;
    printf("Input the size of the square matrix : ");
    scanf("%d",&n);
    printf("Input elements in the first matrix : \n");
    for(i = 0; i<n ; i++){
        for(j = 0; j<n; j++) {
      printf("element - [%d][%d] : ",i,j);
      scanf("%d",&a[i][j]);
        }
      
    }
    printf("The matrix is : ");
    for(i = 0; i<n ; i++){
        for(j = 0; j<n; j++) {
      printf("%d\t",a[i][j]);
      
        }
       
      printf("\n");
    }
    printf("\nThe sum of rows and columns of the matrix is : ");
    for(i = 0; i<n ; i++){
        for(j = 0; j<n; j++) {
      printf("%d\t",a[i][j]);
      scol = scol + a[j][i];
        } 
      printf("\t%d",srow);
      printf("\n");
    }
     for(i = 0; i<n ; i++){
        for(j = 0; j<n; j++) {
      printf("%d\t",a[i][j]);
      scol = scol + a[j][i];
        } 
      printf("\t%d",srow);
      printf("\n");
    }
    
    return 0;
}