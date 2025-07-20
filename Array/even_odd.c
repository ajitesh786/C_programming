#include<stdio.h>
int main() {
    int a[20],n,i,even = 0,odd = 0;
    printf("How many number do you want do enter : ");
    scanf("%d",&n);
    printf("Please enter elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Even = %d\nOdd = %d\n",even,odd);
    return 0;
}