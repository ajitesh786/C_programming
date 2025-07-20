#include<stdio.h>
int main() {
    int arr[30],n,i,even = 0,odd = 0;
    printf("How many number will you enter : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    for(i = 0;i<n;i++) {
    scanf("%d",&arr[i]);
    }
    for(i = 0;i<n;i++) {
        if(arr[i]%2==0){
            even ++;
        }
        else 
        odd ++;

    }
    printf("Even number is : %d\n",even);
    printf("Odd number is : %d\n",odd);
    return 0;

}