#include<stdio.h>
#include<math.h>
void root(float a,float b,float c);
int main() {
    float a,b,c,root1,root2;
    printf("Enater a (a!=0) : ");
    scanf("%f",&a);
    printf("Enter b and c : ");
    scanf("%f %f",&b,&c);
    if(a==0){
        printf("Invalid\n");
    } else{
   root(a,b,c);
    }
    
return 0;

} 
void root(float a,float b,float c) {
    float root1,root2,m;
     float D = b*b - 4*a*c;
    if(D==0){
        root1 = (-b)/(2*a);
        root2 = root1;
        printf("Real and Equal : ");
        printf("\nRoot1 is : %f\nRoot2 is : %f\n",root1,root2);

    } else if(D>0){
        m = sqrt(D);
        root1 = (-b + m)/(2*a);
        root2 = (-b - m)/(2*a);
        printf("Roots are Real and Distinct : ");
        printf("Root1 is : %f\nRoot2 is : %f\n",root1,root2);
       } else{
        float real,img;
    
        img = sqrt(-D)/(2*a);
        real = -b/(2*a);
        printf("Roots are imaginary\n");
       printf("Root1 is : %f + i%f\nRoot2 is : %f - i%f\n",real,img,real,img);
       }
}