#include<stdio.h>
#include<string.h>
int main() {
    char str1[30];
    char str2[15];
    printf("Enter string :");
    gets(str1);
    printf("Enter string to concatenate : ");
    gets(str2);
    strcat(str1,str2);
    printf("Concatenated string is : %s\n",str1);
}