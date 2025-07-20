#include<stdio.h>
int main() {
    float x,y,z;
    printf("enter x : ");
    scanf("%f",&x);
    printf("enter y : ");
    scanf("%f",&y);
    printf("enter z : ");
    scanf("%f",&z);
    float perimeter;
    if (x<y+z && y<x+z && z<x+y)
    {
        /* code */ printf("possible to make a triangle");
        perimeter = x + y+z;
        printf("%f",perimeter);
    } else {
        printf("not possible");
    }
    return 0;
}