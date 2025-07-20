#include<stdio.h>
#include<string.h>
int main() {
    char str1[15];
    printf("Enter string elements : ");
    gets(str1);
    int temp,l = strlen(str1);
    for(int i = 0;i<l/2;i++){
    temp = str1[i];
    str1[i] = str1[l - i - 1];
    str1[l - i - 1] = temp;
    }
    printf("Reverse str is : %s\n",str1);
    return 0;

}