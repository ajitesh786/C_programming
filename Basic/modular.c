// 
#include<stdio.h>
int main() {
    int n,num;
    int max,position;
    printf("How many numbers will you enter ?");
    scanf("%d",&n);
    if(n<0) {
        printf("Invalid iput count.\n");
        return 0;
    }
    printf("Enter number 1 : ");
    scanf("%d",&num);
    max =  num;
    position =1;
    
    for(int i =2 ; i<=n;i++) {
        printf("Enter number %d",i  );
        scanf("%d",&num);
        if(num>max ) {
            max = num;
            position = i;
        }
    }
    printf("Highest number is %d at position %d.\n",max,position);
    return 0;
}