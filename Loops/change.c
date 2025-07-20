#include<stdio.h>
int main() {
int a = 10;
int *ptr;
ptr = &a;
printf("a is : %d\n",*ptr);
*ptr = 20;
printf("a is : %d\n",*ptr);
return 0;
}