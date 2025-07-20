#include<stdio.h>
int main() {
    char str[20] = "Ajitesh";
    char stp[10];
    printf("Enter strin:");
    scanf("%5s",stp);
    printf("%s\n",stp);
    
    char strin[10] = {'M','a','m','@','2'};
    char name[20] = {'A','j','i','t','\0'};
    printf("%s %s %s\n",name,strin,str);
    puts(str);
    puts(strin);
    printf("space%5.2s",&strin[2]);
    
}