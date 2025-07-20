#include<stdio.h>
int main() {
    int arr[30],i,sum = 0,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Input %d elements in the array.\n",n);
    for ( i= 0;i<n;i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);

    }
     for ( i= 0;i<n;i++) {
        sum = sum + arr[i];

    }
    printf("Sum of all the elements stored in the array is : %d\n",sum);

    return 0;

}