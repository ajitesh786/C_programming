#include<stdio.h>
int main() {
    int *arr,n;
    int sum = 0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    arr = (int *) malloc(n*sizeof(int));
    printf("Enter elements of array : ");
    for(int i = 0; i<n; i++) {
        printf("Enter element %d : ",i);
        scanf("%d",arr++);
        sum = sum + arr[i];
    }
    printf("Sum of elements of array is : %d",sum);
    free(arr);
    return 0;

}