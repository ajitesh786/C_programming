#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
int main() {
    float side,rad,a,b;
    printf("enter side : ");
    scanf("%f",&side);
    printf("enter rad : ");
    scanf("%f",&rad);
    printf("enter a :");
    scanf("%f",&a);
    printf("enter b : ");
    scanf("%f",&b);
    squareArea(side);
    circleArea(rad);
    rectangleArea(a,b);
    printf("squareArea is : %f\n",squareArea(side));
    printf("circleArea is : %f\n",circleArea(rad));
    printf("rectangleArea : %f\n",rectangleArea(a,b));
    return 0;

}
float squareArea(float side){
    return side*side;
}
float circleArea(float rad) {
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b) {
    return a*b;
}