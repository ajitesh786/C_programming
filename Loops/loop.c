// Find number of digit
#include<stdio.h>
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int count=0;
    for(int i=1; ; i++){
        if(n/10<=0)
        break;
        count = count + 1;
        n=n/10;
    }
    printf("Number of digit is %d\n",count);
    return 0;

}