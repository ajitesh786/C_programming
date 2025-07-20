#include<stdio.h>
int main() {
    int i,j,n,temp;
   int  arr[] = {3,6,9,5,7,4,2,7};
   n = 8;
   // Selection sort
   for(i = 0; i<n-1; i++) {
    int minp = i;
    for(j = i+1; j<n; j++) {
        if(arr[j] < arr[minp]) 
        minp = j;
    }
    temp = arr[minp];
    arr[minp] = arr[i];
    arr[i] = temp;
   }
   printf("Elements of array after sorting : ");
   for(i = 0; i<n; i++) {
    printf("%d ",arr[i]);
   }
return 0;
}