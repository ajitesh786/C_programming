#include<stdio.h>
int main() {
    int i,j,n;
    char ch;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      if(i%2!=0) 
       for(j=1;j<=i;j++){
            printf("%d ",j);
        }
    else 
    for(ch = 'A';ch<='A'+i-1;ch++){
        printf("%c",ch);
        printf(" ");
    }
    printf("\n");
    }
    return 0;
}