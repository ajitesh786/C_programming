#include<stdio.h>
int main() {
    union student {
        int a;
        char b;
        float c;

    };
    union student s1;
    union student *ptr = &s1;
    s1.a = 1;
    s1.b = 97;
    s1.c = 78.90;
    printf("a is : %d\n",ptr->a);
    printf("b is : %c\n",ptr->b);
    printf("c is : %fn",ptr->c);
    return 0;
}