#include<stdio.h>
int main() {
    int x,y;
    printf("enter x : ");
    scanf("%d",&x);
    printf("enter y : ");
    scanf("%d",&y);
    if ( x!=0 && y!=0 && ( x%y ==0 || y%x==0 ))
    {
        /* code */printf("Multimplied");
    } else {
        printf("Not Multiplied");
    }
    return 0;
    
}