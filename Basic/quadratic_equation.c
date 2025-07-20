#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);
     float t1,t2,z,D;
      z= (b*b-4*a*c);
     D = sqrt(b*b-4*a*c);
     t1 = (-b + D)/(2*a);
     t2 = (-b - D)/(2*a);
     if (a!=0) {
     if (z==0)
     {
        /* code */printf("roots are equal ");
        printf("root1 and root2 is : (%f,%f)",t1,t2);

     } else if (z>0)
     {
        printf("roots are real and distinct ");
        printf("root1 and root2 is : (%f,%f)",t1,t2);
     }
     
     else 
     {
        float real,img;
        real = -b/(2.0*a);
        img = sqrt(-z)/(2.0*a);
        /* code */printf("roots are imaginary");
        printf("root1 is : (%f + %fi)",real,img);
        printf("root2 is : (%f - %fi)",real,img);

     }
    } else {
       
        printf("it is not form quadratic");
    }
     
     return 0;

}