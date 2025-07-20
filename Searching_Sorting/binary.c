#include<stdio.h>
int main(){
    int a[10],n,num;
    int mid,i; // Represent index of array.
    printf("How many number will you enter : ");
    scanf("%d",&n);
    printf("Enter elements of Array : \n");
    for(i = 0; i<n; i++){
        printf("Enter element-%d : ",i);
        scanf("%d",&a[i]);

    }
    printf("Enter the number to search : ");
    scanf("%d",&num);
    // Binerary Search.
    int first = 0,last = n-1;
    int flag = 0;
    while(first <= last)
    {
        mid = (first + last)/2;
        if(a[mid] == num){
    flag = 1;
        break; 
        } else if(a[mid]<num)
        first = mid + 1;
        else 
        last = mid - 1;
    
    }
    if(flag == 1)
    printf("number is found at index %d number = %d\n",mid,a[mid]);
    else {
        printf("Number is not found.\n");
    }
    return 0;
}