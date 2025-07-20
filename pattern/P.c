#include<stdio.h>
int main() {
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);
    for(i = 0; i<rows; i++){
        if(i == 0 || i == rows -1){
            for(j = 0; j<rows; j++)
                printf("*");
            } else {
             for(j = 0; j<rows; j++) {
                if(j == 0 || j==rows-1 || j == i || j == rows -i-1)
                printf("*");
                else
                printf(" ");
             }
            }
            printf("\n");
        }
    }
