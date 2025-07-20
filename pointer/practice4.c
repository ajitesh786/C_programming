#include<stdio.h>
int main() {
    int a[15] = {1,2,3,4,5,6,8,9,6,8,6,5,4,1,2,3};
    int *p;
    p = a;
    printf("%d\n",*p++);
    printf("%d\n",*p);

    printf("%d\n",*(p++));
    printf("%d\n",*p);

    printf("%d\n",*++p);
    printf("%d\n",*p);
    printf("im%d\n",*++p);
    printf("%d\n",*(++p));
    printf("%d\n",*p);

    printf("%d %d\n",*p++,*p++);
    printf("%d\n",*p);
    printf("%d %d %d\n",*--p,*--p,*--p);
     printf("%d\n",*p);
      printf("%d\n", --(*p));



}