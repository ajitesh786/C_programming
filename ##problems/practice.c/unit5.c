#include<stdio.h>
int main() {
   int a[10],n,i,j;
   int temp,minp;
   printf("Enter size of array to print : ");
   scanf("%d",&n);
   printf("Enter element of array : \n");
   for(i =0; i<n; i++){
    printf("Enter element-%d = ",i);
    scanf("%d",&a[i]);

   }
   for(i =0; i<n-1; i++){
    minp = i;;
    for(j = i+1; j<n; j++){
        if(a[j] < a[minp])
        minp = j;
    }
    temp = a[minp];
    a[minp] = a[i];
    a[i] = temp;
   }
   printf("Sorted array is : ");
   for(i =0; i<n; i++){
    printf("%d ",a[i]);

   }

}