#include<stdio.h>
int main() {
    int i,j,rows;
    printf("Enter no. of rows : ");
    scanf("%d",&rows);

    for(i = 0; i<rows; i++) {
        
   
        for(j=0; j<i; j++)
        printf(" ");
         
        for(j=0; j<rows-i; j++) {
      if (i==0 || j==0 || j == rows-i-1)
            printf("*");
          else
            printf(" ");
        }
     
    printf("\n");
    }
return 0;

}