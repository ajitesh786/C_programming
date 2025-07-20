#include<stdio.h>
int main() {
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    for(int m=1;m<=n;m++) {
        for(int i= 1; i<=8; i++) {
            printf("%d × %d = %d , ",i,m,i*m);
        }
    }
    return 0;
    
}