#include<stdio.h>
int main() {
    int x,y,z;
    printf("enter x : ");
    scanf("%d",&x);
    printf("enter y : ");
    scanf("%d",&y);
    printf("enter z : ");
    scanf("%d",&z);
    if (x>y && x>z)
    {
        /* code */printf("1st number is the greatest among three");
    } else if (y>x && y>z)
    {
        /* code */printf("2nd number is the greatest among three");
    } else if (z>x && z>y)
    {
        /* code */printf("3rd number is the greatest among three");
    } else if(x == y && x>z )
     {
        printf(" x and y numbers are equal and greatest");
    } else if (y==z && y>x)
    {
        /* code */printf(" y and z numbers are equal and greatest");
    } else if (x==z && x>y)
    {
        /* code */printf(" x and z numbers are equal and greatest");
    } else {
        printf("  numbers are equal ");
    }
    
    
    return 0;
    
    
}