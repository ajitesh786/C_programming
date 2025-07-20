#include<stdio.h>
int findminimum(int arr[],int n);
int findmaximum(int arr[] , int n);
int main () {
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int arr[n] ;
    printf("enter all %d elements : ",n);

    for(int i = 0; i< n; i++) {
     scanf("%d",& arr[i]);
     

    }
    int max = findmaximum(arr,n);
     int min = findminimum(arr,n);
     printf("Minimum value is : %d\nMaximum value is : %d\n",min,max);

}
int findmaximum(int arr[] , int n){
    int max = arr[0];
    for(int i= 1;i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}
int findminimum(int arr[],int n) {
    int min= arr[0];
    for(int i= 1;i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}
