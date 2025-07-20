 #include<stdio.h>
 int main(){
 
 int a[10],b[10],i,n,max,min;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    
    printf("intput %d elements in the array : ",n);
    for(i=0;i<n;i++){
        printf("element-%d : ",i);
        scanf("%d",&a[i]);
    }
          max = a[0];
          min = a[0];
         for(i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("Maximum element is : %d\nMinimum element is : %d\n",max,min);

return 0;
}