#include<stdio.h>
int main() {
    int arr[15][15],brr[15][15],crr[15][15];
    int i,j,k,R1,C1,R2,C2;
    printf("Enter number of rows and coulums : matrix A : ");
    scanf("%d %d",&R1,&C1);
        printf("Enter number of rows and coulums : matrix B : ");
    scanf("%d %d",&R2,&C2);
if(C1 == R2){
    printf("Matrix multiplication is possible.\n");
} else{
    printf("Matrix multiplication condition is not satisfied.\n");
    return 1;
}

    printf("Enter elements of Matrix A : ");
    for(i = 0; i<R1; i++) {
        for(j = 0; j<C1; j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter elements of Matrix B : ");
    for(i = 0; i<R2; i++) {
        for(j = 0; j<C2; j++) {
            scanf("%d",&brr[i][j]);
        }
    }

        for(i = 0; i<R1; i++) {
        for(j = 0; j<C2; j++) {
        int sum = 0;
        for(k = 0; k<C1; k++){
       
            sum = sum + arr[i][k] * brr[k][j];

        }
        crr[i][j] = sum;

        }

    }   printf("Matrix C is : \n");
            for(i = 0; i<R1; i++) {
        for(j = 0; j<C2; j++) {
       printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
   return 0;
}