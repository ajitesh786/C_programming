#include<stdio.h>
int main() {
    char str[15];
    printf("Enter str : ");
    gets(str);
   for(int i = 0; str[i] != '\0';i++ ){
     if(str[i] >='a' && str[i] <= 'z') {
        str[i] = str[i] -32;
     }
   }
   printf("str is : %s\n",str);
   return 0;

}