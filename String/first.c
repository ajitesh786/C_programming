#include<stdio.h>
#include<string.h>
int main() {
    char name[30];
    printf("Enter name : ");
    gets(name);
    int count ;
    count = strlen(name);
    printf("%s length :  %d\n",name,count);
}