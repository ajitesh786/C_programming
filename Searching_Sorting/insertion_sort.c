#include<stdio.h>
int main() {
    int arr[] = {1,2,3,8,7,5,6,4};
    int n = 8;
    int i , j,temp;
    for(i = 1; i<n; i++) {
        temp = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>temp) {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = temp;
       
    }
    printf("Sorted array is : ");
    for(i = 0;i<n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}