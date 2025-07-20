#include<stdio.h>
int main() {
    int n,count = 0;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid number \n");
        return 1;
    }
    while(n>0) {
        n = n/10;
        count ++;
    }
    printf("The number of digits are : %d\n",count);
    return 0;
}