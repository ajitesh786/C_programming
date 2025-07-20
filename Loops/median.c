#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter odd number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i==(n+1)/2){
            for(int j=1;j<=n;j++){
                printf("*");
            } printf("\n");
        } else {

        for(j=1;j<=n;j++) {
        if(j==(n+1)/2)
        printf("*");
        else
        printf("#");
        }
    printf("\n");
    } 

    
}
return 0;
}