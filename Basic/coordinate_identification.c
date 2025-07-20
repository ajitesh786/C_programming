#include<stdio.h>
int main() {
    float x,y;
    printf("enter x : ");
    scanf("%f",&x);
    printf("enter y : ");
    scanf("%f",&y);
    if (x>0 && y>0)
    {
        printf("the coordinate point is (%.2f,%.2f)",x,y);
        /* code */printf("lies in first quadrant");
    } else if (x<0 && y>0)
    {
        /* code */printf("the coordinate point is (%.2f,%.2f)",x,y);
        /* code */printf("lies in second quadrant");
    } else if (x<0 && y<0)
    {
        /* code */printf("the coordinate point is (%.2f,%.2f)",x,y);
        /* code */printf("lies in third quadrant");
    } else if (x>0 && y<0)
    {
        /* code */printf("the coordinate point is (%.2f,%.2f)",x,y);
        /* code */printf("lies in fourth quadrant");
    } else if (x==0 && y!=0)
    {
         printf("the coordinate point is (%.2f,%.2f)",x,y);
         printf("lies in y axis");

    } else if (y==0 && x!=0)
    {
        /* code */printf("the coordinate point is (%.2f,%.2f)",x,y);
        printf("lies in x axis");
    }
    
    
     else {
        printf("the coordinate point is (%.2f, %.2f)",x,y);
        /* code */printf(" origin");
    }
    return 0;
    
    
    
}