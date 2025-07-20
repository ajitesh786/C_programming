#include<stdio.h>
int main() {
    int i,j,rows;
    printf("Enter no. of rows : ");
    scanf("%d",&rows);

    for(i = 0; i<rows; i++){
        if(i == rows -1)
        for(j = 0; j<=i; j++)
        printf("*");
        else {
        for(j = 0; j<=i; j++)
        if(j ==0 || j== i)
        printf("*");
        else
        printf(" ");
        }
    
        printf("\n");
    }
return 0;





}