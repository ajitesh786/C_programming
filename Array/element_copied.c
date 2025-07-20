#include<stdio.h>
int main() {
    int a[10],b[10],i,n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("intput %d elements in the array : ");
    for(i=0;i<n;i++){
        printf("element-%d : ",i);
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    printf("The elements stored in the first array are :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nThe elements copied into the second array are : \n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}