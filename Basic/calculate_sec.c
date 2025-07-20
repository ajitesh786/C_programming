#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("Input seconds : ");
    scanf("%d",&x);
    int hrs,minutes,sec;
    hrs = x/3600;
    minutes = (x%3600)/60;
    sec = (x%3600)%60;
    printf("Totle hrs: %d\n",hrs);
    printf("Totle minutes: %d\n",minutes);
    printf("Totls seconds: %d\n",sec);
    return 0;
}