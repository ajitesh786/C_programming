#include<stdio.h>
#include<string.h>
int main() {
    char str1[15] ;
    char str2[15];
    printf("Enter string : ");
    gets(str1);
    printf("Enter strin 2 : ");
    gets(str2);
    strncat(str1,str2,3);
    puts(str1);
}