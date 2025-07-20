#include<stdio.h>
int main() {
    int a = 10;
    float b = 1.1;
    char c = 'A';
    void *ptr;
    ptr = &a;
    printf("%d\n",*(int*)ptr);
    ptr = &b;
    printf("%f\n",*(float *) ptr);
    ptr = &c;
    printf("%c\n",*(char *)ptr);
    return 0;
}