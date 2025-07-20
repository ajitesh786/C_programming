#include<stdio.h>
int main(){
    int *ptr;
    {
        int a = 10;
        ptr = &a;
        printf("%d\n",*ptr);
    }
    //printf("%d\n",a);
    int c = 15;
    printf("%d",c);
    printf("%d\n",*ptr);
    printf("%d\n",*ptr);
}