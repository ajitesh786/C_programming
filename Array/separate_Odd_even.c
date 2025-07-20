#include<stdio.h>
int main() {
    int a[10],even[10],odd[10],i,n;
    int evenCounter = 0,oddCounter = 0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d elements in the array : \n",n);
     for(i=0;i<n;i++){
        printf("element-%d : ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
        even[evenCounter]=a[i];
        evenCounter++;}
        else{
        odd[oddCounter]= a[i];
        oddCounter++;
        }
    }
    printf("The Even elements are : \n");
    for(i = 0; i<evenCounter; i++){
        printf("%d\t",even[i]);
    }
     printf("\nThe Odd elements are : \n");
    for(i = 0;  i<oddCounter ; i++){
        printf("%d\t",odd[i]);
    }
    return 0;
}