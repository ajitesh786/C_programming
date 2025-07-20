#include<stdio.h>
int main() {
    int a[2][2];
    printf("Enter elements of array : ");
    for(int i=0;i<2;i++){
        for(int j=0;j<=i;j++) {
            scanf("%d",&a[i][j]);
           
        }
       
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<=i;j++){
            printf("element is %d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}