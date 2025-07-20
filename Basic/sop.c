#include<stdio.h>
int main() {
    int n;
    int i=1;
    int sum = 0;
    while (1){
        printf("enter number : ");
        scanf("%d",&n);

        if (n==0) {
            break;

        }
        
        if(n%2==0) {
            sum = sum + n;
    }
}
printf("sum is : %d",sum);
return 0;
}