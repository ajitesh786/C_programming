#include<stdio.h>
int main() {
    int a = 10 , b = 20;
    float result = (float)a/b;
    int finalresult = a/b;
    printf("%.2f\n",result);
    printf("%d\n",finalresult);
    float c = 10.0 , d = 15.5;
    float calc = c + (int)d;
    printf("%.2f\n",calc);
     calc = (int)c +(int) d;
    printf("%d\n",calc);
    return 0;

}