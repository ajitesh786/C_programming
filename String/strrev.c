#include<stdio.h>
#include<string.h>
int main(){
char str[15];
printf("Enter str : ");
gets(str);
int i,j,temp,l;
l = strlen(str);
for(i = 0,j = l-1;  i<j;    i++,j--) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
printf("Reverse str is : %s\n",str);
return 0;
}