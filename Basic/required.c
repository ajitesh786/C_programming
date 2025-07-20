// Fuels required:
#include <stdio.h>
#include<math.h>
int main() {
    float x;
    printf("Input Distance to Cover in(km): ");
    scanf("%f",&x);
    int mileage = 60; 
    float fuels = x/60;
    printf("Fuels requred in (Liter)%.2f",fuels);
    return 0;
}