#include<stdio.h>
int main() {
    int i,j,n;
    char ch;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(ch='A';ch<='A'+i-1;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}