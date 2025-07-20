#include<stdio.h>
float square(int a);
float circle(int r);
float rectangle(int x,int y);
int main() {
    int a,r,x,y;
    printf("Enter side of square : ");
    scanf("%d",&a);
    printf("Enter radius : ");
    scanf("%d",&r);
    printf("Enter sides of rectangle a,b : ");
    scanf("%d %d",&x,&y);
    printf("Area of square is : %f\n",square(a));
    printf("Area of circle is : %f\n",circle(r));
    printf("Area of rectangle is : %f\n",rectangle(x,y));
    return 0;
} 
float square(int a) {
    return a*a;
}
float circle(int r) {
    return 3.14 * r *r;
}
float rectangle(int x,int y) {
    return x*y;
}
