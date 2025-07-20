#include<stdio.h>
int main() {
    int x,y;
    printf("enter number x : ");
    scanf("%d",&x);
    printf("enter number y : ");
    scanf("%d",&y);
    int sum=0;
    if(x<y) {
        for(int i=x;i<=y; i++) {
            
            if(i%2 !=0) {
                
                sum = sum + i;
                  
            } 
         
        }
    } else {
        for(int i=y;i<=x; i++) {
           
            if(i%2 !=0) {
                
                sum = sum + i;
                  
            } 
    }
    
}
printf("final sum is : %d",sum);
    return 0;
}
