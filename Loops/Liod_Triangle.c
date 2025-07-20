//Error to print please code again;
#include<stdio.h>
int main() {
    int i,j,n,num;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) {
            if(i==j){
                printf("1");
            }
            if(i%2==0){
                num = i%2;
            }
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}