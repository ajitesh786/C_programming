#include<stdio.h>
int main () {
    int i,j,m,n;
    printf("Enter number of column: ");
    scanf("%d",&n);
    printf("Enter number of rows: ");
    scanf("%d",&m);
    for(i=1;i<=n;i++) {
       
for(j=1;j<=m;j++){
    printf("%d ",j);
}        
printf("\n");
    }
    return 0;
}