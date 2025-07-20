#include<stdio.h>
//#include<string.h>
int main() {
    char str[50] ="Wellcome to Jenny's Lecture";
    char *ptr ;
    ptr = str;
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*ptr);
     printf("%c\n",*ptr);

}