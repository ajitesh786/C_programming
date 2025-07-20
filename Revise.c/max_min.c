#include<stdio.h>
int main() {
    int arr1[30],i,n;
   
    printf("Enter size of array1 : ");
    scanf("%d",&n);
    printf("Enter elements of array : \n");
    for(i = 0;i<n;i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);

    }
     int max = arr1[0],min = arr1[0];

      for(i = 0;i<n;i++) {
         if (arr1[i]>max)
        max = arr1[i];
         if(arr1[i]<min)
         min = arr1[i];

    }
    printf("Maximum element is : %d\n",max);
    printf("minimum element is : %d\n",min);
    return 0;

}