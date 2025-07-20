#include<stdio.h>
int main() {
    int h;
    printf("enter your height (in cm) : ");
    scanf("%d",&h);
    if (h<140)
    {
        /* code */printf("dwarf");
    } else if (h>=140 && h<=159)
    {
        /* code */printf("Average");
    }else if (h>=160 && h<=179)
    {
        /* code */printf("aboce average");

    } else if (h>=180 && h<=189)
    {
        /* code */printf("tall");
    } else if (h>=190 && h<=199)
    {
        /* code */printf("tall");
    } else {
        printf("extremely tall");
    }
    
    return 0;
    
    
    
}