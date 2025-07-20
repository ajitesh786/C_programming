#include<stdio.h>
int main() {
    char str[30];
    int i,j , count = 0,temp;
    printf("Enter string elements : ");
    fgets(str,30,stdin);
    for(i= 0;str[i] != '\0';i++) {
  count ++;
    }
    for(i= 0,j=count - 1;i<j;i++ ,j--){
     temp = str[i];
     str[i] = str[j];
     str[j] = temp;
    }
    puts(str);
    return 0;
}
https://prod.liveshare.vsengsaas.visualstudio.com/join?B240EAC468B4F202C251708DB844EA4EF28D