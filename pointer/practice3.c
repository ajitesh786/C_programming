#include<stdio.h>
int main() {
    int a[15]= {1,2,3,6,5,4,9,8,5,6,4,5,9};
    int *p,*q;
    p = a;
    q  = a+5;
    int d = q-p;
    printf("d = %d\n",d);
    int x = p -q;
    printf("d = %d\n",x);
    printf(" a[6] = %d\n",*q);
    p = p-1;
    printf("Address of a : %x",p);
  //  int d = 
}
https://prod.liveshare.vsengsaas.visualstudio.com/join?84E1DBDFE86290B832E7721D04AF71502CD4
