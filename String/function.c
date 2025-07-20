#include<stdio.h>
# include<string.h>
int main() {
    int len1,len2;
    char str1[30];
    char str2[15];
    printf("Enter str1 : ");
    gets(str1);
    printf("Enter str2 : ");
    gets(str2);
    len1 = strlen(str1);;
    len2 = strlen(str2);
    for(int i = 0 ; i<=len2;i++) {
        str1[len1 + i] = str2[i];
        
    }
    printf("Strin after concatenated : ");
    puts(str1);
    return 0;

}