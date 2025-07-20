#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    // Using Bhaskara's formula find roots of quadratic
    printf("Input a : ");
    scanf("%d",&a);
    printf("Input b : ");
    scanf("%d",&b);
    printf("Input c : ");
    scanf("%d",&c);
    float root1,root2;
   float z;
   z =  sqrt(b*b - 4*a*c);
   root1 = (-b + z )/(2.0*a);
   root2 = (-b - z)/(2.0*a);
   printf("Root1 is : %f",root1);
   printf("Root2 is : %f",root2);
   return 0;
}
