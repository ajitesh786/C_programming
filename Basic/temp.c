#include<stdio.h>
int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    if (n<0)
    {
        /* code */printf("Freezing weather ");

    } else if(n>=0 && n<20){
    printf("Very cold weather ");
    } else if (n>=20 && n<30) {
    printf("Normal in Temp");
} else if (n>=30 && n<40) {
     printf("Hot");
    } else if (n>=40 && n<50) {
            printf("Hotter ");
     }else if (n>=50) {
        printf("Very Hot");
     }
     return 0;
}