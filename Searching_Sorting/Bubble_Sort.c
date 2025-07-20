#include<stdio.h>
int main() {
    int i,j,temp,flag =0;
    int arr[50],n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    
    for(i = 0; i<n; i++ )  {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i<n-1; i++ ) {
        flag = 0;
        for(j = 0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
    
            }
        }
        if (flag == 0)
        break;

    }
    printf("Elements of array after sorting : ");
    
    for(i = 0; i<n; i++ )  {
        printf("%d ",arr[i]);
    }
    return 0;
}