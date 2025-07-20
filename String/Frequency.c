#include<stdio.h>
int main () {
    int arr[30],i,j,n,freq;
    printf("Enter size of elements : ");
    scanf("%d",&n);
    printf("Input %d elements in the array : ");
    for(i = 0;i<=n;i++){
        printf("element - %d : \n",i);
        scanf("%d",&arr[i]);
    } 
}