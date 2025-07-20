#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d;
    int x,y,z,t;
    printf("Input Weight of a:");
    scanf("%f",&a);
    printf("No.of a: ");
    scanf("%d",&x);

    printf("Input Weight of b:");
    scanf("%f",&b);
    printf("No.of b: ");
    scanf("%d",&y);

    printf("Input Weight of c:");
    scanf("%f",&c);
    printf("No.of c: ");
    scanf("%d",&z);

    printf("Input Weight of d:");
    scanf("%f",&d);
    printf("No.of d: ");
    scanf("%d",&t);
    float Avg = (x*a+y*b+z*c+t*d)/(x+y+z+t);
    printf("Average is:%f",Avg);
    return 0;
    

}