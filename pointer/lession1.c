#include<stdio.h>
int main( ){
    int i, count = 0,len = 0;
    char str1[15] = "Ajitesh Kumar";
    char str2[15] = "Roll Number 06";
    for(i =0;str1[i]!='\0';i++){
    count ++;
    }
    for(i = count;str2[i]!='\0';i++){
       str1[count +i] =  str2[i];
       len ++;
    }
    str1[count + len] = '\0';
    for(i = 0;str1[i]!= '\0';i++){
   printf("%s",str1[i]);
    }
    return 0;

}