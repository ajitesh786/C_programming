#include<stdio.h>
int main() {
    int i,j,rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(i = 0; i<rows; i++){
        if(i ==0 || i == rows-1) {
        for(j = 0; j<rows; j++){
            printf("*");
        } 
    } else {
            for(j = 0; j<=rows - 1; j++) 
            if(j== 0 || j==rows-1)
            printf("*");
             else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}