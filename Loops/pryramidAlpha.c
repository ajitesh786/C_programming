#include<stdio.h>
int main() {
    int i,j,n;
    char ch ;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        ch = 'A';
        for(j=1;j<=i;j++){
            
            printf("%c ",ch);
           ch++;
        }
        printf("\n");
    }
    return 0;
}