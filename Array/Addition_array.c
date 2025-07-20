#include<stdio.h>
int main() {
    int arr1[10][10],arr2[10][10],arr3[10][10];
    int m,n,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    printf("Enter array1 elements : ");
    for(i =  0; i<m ; i++ ) {
        for(j = 0; j<n; j++) {
            scanf("%d",&arr1[i][j]);
        }
    }
printf("Enter array2 elements : ");
 for(i =  0; i<m ; i++ ) {
        for(j = 0; j<n; j++) {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Addition of both matrix is : \n");
 for(i =  0; i<m ; i++ ) {
        for(j = 0; j<n; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
     for(i =  0; i<m ; i++ ) {
        for(j = 0; j<n; j++) {
         printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;





}