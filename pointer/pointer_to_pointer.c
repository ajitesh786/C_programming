#include<stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("%d %d %p %p\n",a,*p,**q,***r);
    return 0;
}