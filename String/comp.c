#include<stdio.h>
#include<string.h>
int main() {
    int value;
    char str1[] = "Hello";
    char str2[] = "Hellocome";
    value = strcmp(str2,str1);
    if( value == 0)
    printf("Str are equals.\n");
    else
    printf("%d : Str are not equal.\n",value);
}